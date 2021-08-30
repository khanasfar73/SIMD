#ifndef HELPER_H
#define HELPER_H

#define BLANK_INST 0b00000000000000000000000000000000
#define OPCODE_MASK 0b00000000000000000000000001111111
#define RD_MASK 0b00000000000000000000111110000000
#define FUNCT3_MASK 0b00000000000000000111000000000000
#define RS1_MASK 0b00000000000011111000000000000000
#define RS2_MASK 0b00000001111100000000000000000000
#define FUNCT2_MASK 0b00000110000000000000000000000000
#define FUNCT5_MASK 0b11111000000000000000000000000000

#include <iostream>

namespace helper
{
    static unsigned int cast_u8(const uint8_t &t)
    {
        return static_cast<unsigned int>(t);
    }

    void printBits(long int n, size_t numBits = 32)
    {
        char b;
        char c = ' '; // delimiter character
        std::cout << "0b";
        for (size_t i = 0; i < numBits; i++)
        {
            // shift 1 and mask to identify each bit value
            b = (n & (1 << (numBits - 1 - i))) > 0 ? '1' : '0'; // slightly faster to print chars than ints (saves conversion)
            std::cout << b;
            if (i < (numBits - 1) && ((numBits - i - 1) % 4 == 0))
                std::cout << c; // print a separator at every 4 bits
        }
        std::cout << std::endl;
    }

    void printPassed(bool b, const char *msg)
    {
        if (b)
            std::cout << bold << green << "Passed:" << msg << "\n"
                      << def << reset;
    }

    void printFailed(const uint32_t expected, const uint32_t tb, const char *msg)
    {
        std::cout << bold << yellow << "Failed: " << msg << def << reset << ": expected ";
        std::cout << expected << ", but found " << tb << "!\n";
    }

    void printFailed(const uint32_t expected, const uint32_t tb, const char *msg, size_t i)
    {
        std::cout << bold << yellow << "Failed: " << msg << i << "])" << def << reset << ": expected ";
        std::cout << expected << ", but found " << tb << "!\n";
    }

    template <typename TStruct>
    void comp_array(const TStruct *value, const TStruct *exp_value, const char *msg, bool &bPass = true,
                    bool Hex = false)
    {
        auto size = sizeof(value);

        for (size_t i = 0; i < size; i++)
        {
            if (value[i] == exp_value[i])
            {
                continue;
            }
            else
            {
                bPass = false;
                if (Hex)
                {
                    std::cout << msg << ": [" << i << "] 0x" << std::hex
                              << exp_value[i] << " but found 0x" << std::hex << value[i] << std::endl;
                    std::cout << std::dec;
                }
                else
                {
                    std::cout << msg << ": [" << i << "] "
                              << exp_value[i] << " but found " << value[i] << std::endl;
                }
            }
        }
    }
}

class Instruction
{
private:
    struct UType
    {
        unsigned opcode : 7;
        unsigned rd : 5;
        unsigned imm : 20;
    };

    struct IType
    {
        unsigned opcode : 7;
        unsigned rd : 5;
        unsigned funct3 : 3;
        unsigned rs1 : 5;
        unsigned imm : 12;
    };

    struct SType
    {
        unsigned opcode : 7;
        unsigned imm1 : 5;
        unsigned funct3 : 3;
        unsigned rs1 : 5;
        unsigned rs2 : 5;
        unsigned imm2 : 7;
    };

    struct RType
    {
        unsigned opcode : 7;
        unsigned rd : 5;
        unsigned funct3 : 3;
        unsigned rs1 : 5;
        unsigned rs2 : 5;
        unsigned funct2 : 2;
        unsigned funct5 : 5;
    };

    struct VectorFPType
    {
        unsigned opcode : 7;
        unsigned vd : 5;
        unsigned width : 3;
        unsigned rs1 : 5;
        unsigned rs2 : 5;
        unsigned vm : 1;
        unsigned mop : 2;
        unsigned mew : 1;
        unsigned nf : 3;
    };

private:
    template <typename TStruct>
    union UMap
    {
        TStruct encoding;
        uint32_t Instruction;
    };

public:
    Instruction();
    ~Instruction();

    static uint32_t makeU(uint8_t imm, uint8_t rd, uint8_t opcode)
    {
        if (imm > 0xFFFFF || rd > 0x1F || opcode > 0x7F)
        {
            printf("TestBench: Invalid Opcode section\n");
            return 0;
        }
        UMap<UType> mapper;
        mapper.encoding.opcode = opcode;
        mapper.encoding.rd = rd;
        mapper.encoding.imm = imm;
        return mapper.Instruction;
    }

    static uint32_t
    makeUJ(uint32_t imm, uint8_t rd, uint8_t opcode)
    {
        return makeU(imm, rd, opcode);
    }

    static uint32_t makeI(uint16_t imm, uint8_t rs1, uint8_t funct3, uint8_t rd, uint8_t opcode)
    {
        if (imm > 0xFFF || rs1 > 0x1F || funct3 > 0x7 || rd > 0x1F || opcode > 0x7F)
        {
            printf("TestBench: Invalid Opcode section\n");
            return 0;
        }
        UMap<IType> mapper;
        mapper.encoding.opcode = opcode;
        mapper.encoding.rd = rd;
        mapper.encoding.rd = rd;
        mapper.encoding.funct3 = funct3;
        mapper.encoding.imm = imm;
        return mapper.Instruction;
    }

    // Store
    static uint32_t makeS(uint8_t imm2, uint8_t rs2, uint8_t rs1, uint8_t funct3, uint8_t imm1, uint8_t opcode)
    {
        if (imm2 > 0x7F || rs2 > 0x1F || rs1 > 0x1F || funct3 > 0x7 || imm1 > 0x1F || opcode > 0x7F)
        {
            printf("TestBench: Invalid Opcode section\n");
            return 0;
        }
        UMap<SType> mapper;
        mapper.encoding.opcode = opcode;
        mapper.encoding.imm1 = imm1;
        mapper.encoding.funct3 = funct3;
        mapper.encoding.rs1 = rs1;
        mapper.encoding.rs2 = rs2;
        mapper.encoding.imm2 = imm2;
        return mapper.Instruction;
    }

    static uint32_t makeSB(uint8_t imm2, uint8_t rs2, uint8_t rs1, uint8_t funct3, uint8_t imm1, uint8_t opcode)
    {
        return makeS(imm2, rs2, rs1, funct3, imm1, opcode);
    }

    static uint32_t makeR(uint8_t funct5, uint8_t funct2, uint8_t rs2, uint8_t rs1, uint8_t funct3,
                          uint8_t rd, uint8_t opcode)
    {
        if (funct5 > 0x1F || funct2 > 0x3 || rs2 > 0x1F || rs1 > 0x1F || funct3 > 0x7 || rd > 0x1F || opcode > 0x7F)
        {
            printf("TestBench: Invalid Opcode section\n");
            return 0;
        }
        UMap<RType> mapper;
        mapper.encoding.opcode = opcode;
        mapper.encoding.rd = rd;
        mapper.encoding.funct3 = funct3;
        mapper.encoding.rs1 = rs1;
        mapper.encoding.rs2 = rs2;
        mapper.encoding.funct2 = funct2;
        mapper.encoding.funct5 = funct5;
        return mapper.Instruction;
    }

    static uint32_t makeVectorFP(uint8_t nf, uint8_t mew, uint8_t mop, uint8_t vm, uint8_t vs2,
                                 uint8_t rs1, uint8_t width, uint8_t vd, uint8_t opcode)
    {
        UMap<VectorFPType> mapper;
        mapper.encoding.opcode = opcode;
        mapper.encoding.vd = vd;
        mapper.encoding.width = width;
        mapper.encoding.rs1 = rs1;
        mapper.encoding.rs2 = vs2;
        mapper.encoding.vm = vm;
        mapper.encoding.mop = mop;
        mapper.encoding.mew = mew;
        mapper.encoding.nf = nf;
        return mapper.Instruction;
    }
};

class ParseFloat
{
private:
    struct FP16
    {
        unsigned Mantissa : 10;
        unsigned Exponent : 5;
        unsigned Sign : 1;
    };

    struct FP32
    {
        unsigned Mantissa : 23;
        unsigned Exponent : 8;
        unsigned Sign : 1;
    };

    struct FP64
    {
        unsigned long Mantissa : 52;
        unsigned Exponent : 11;
        unsigned Sign : 1;
    };

    template <typename TStruct, typename TData_type>
    union UMap
    {
        TStruct encoding;
        TData_type number;
    };

    template <typename F, typename D>
    union A2B
    {
        F f;
        D d;
    };

public:
    ParseFloat(/* args */);
    ~ParseFloat();

    static float makeFP16(bool Sign, short Exponent, uint16_t Mantissa)
    {
        if (Exponent > 31 || Mantissa > 1023)
        {
            printf("Make Float Error =====>> Invalid float\n");
            return 0.0;
        }

        UMap<FP16, float> mapper;
        mapper.encoding.Exponent = Exponent + 15;
        mapper.encoding.Mantissa = Mantissa;
        mapper.encoding.Sign = Sign;
        return mapper.number;
    }

    static float makeFP32(bool Sign, short int Exponent, uint32_t Mantissa)
    {
        if (Mantissa > 8388607)
        {
            printf("Make Float Error =====>> Invalid float\n");
            return 0.0;
        }

        UMap<FP32, float> mapper;
        mapper.encoding.Exponent = Exponent + 127;
        mapper.encoding.Mantissa = Mantissa;
        mapper.encoding.Sign = Sign;

        return mapper.number;
    }

    static double makeFP64(bool Sign, short int Exponent, uint32_t Mantissa)
    {
        if (Mantissa > 0xFFFFFFFFFFFFF)
        {
            printf("Make Float Error =====>> Invalid float\n");
            return 0.0;
        }

        UMap<FP64, double> mapper;
        mapper.encoding.Exponent = Exponent + 1023;
        mapper.encoding.Mantissa = Mantissa;
        mapper.encoding.Sign = Sign;

        return mapper.number;
    }

    static uint32_t float2uint(float &f)
    {
        A2B<float, uint32_t> T;
        T.f = f;
        return T.d;
    }

    static uint64_t double2uint(double &f)
    {
        A2B<float, uint64_t> T;
        T.f = f;
        return T.d;
    }
};

#endif /* HELPER_H */