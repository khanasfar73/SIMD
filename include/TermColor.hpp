#ifndef TERM_COLOR_H
#define TERM_COLOR_H

#include <ostream>

namespace TermColor
{
    enum Code
    {
        FG_BLACK = 30,
        FG_RED = 31,
        FG_GREEN = 32,
        FG_YELLOW = 33,
        FG_BLUE = 34,
        FG_MAGENTA = 35,
        FG_CYAN = 36,
        FG_LIGHT_GRAY = 37,
        FG_DEFAULT = 39,
        FG_DARK_GRAY = 90,
        FG_LIGHT_RED = 91,
        FG_LIGHT_GREEN = 92,
        FG_LIGHT_YELLOW = 93,
        FG_LIGHT_BLUE = 94,
        FG_LIGHT_MAGENTA = 95,
        FG_LIGHT_CYAN = 96,
        FG_WHITE = 97,
        BG_RED = 41,
        BG_GREEN = 42,
        BG_BLUE = 44,
        BG_DEFAULT = 49,
    };

    class Modifier
    {
        Code code;

    public:
        Modifier(Code pCode) : code(pCode) {}
        friend std::ostream &
        operator<<(std::ostream &os, const Modifier &mod)
        {
            return os << "\033[" << mod.code << "m";
        }
    };
}

namespace TermFormat
{
    enum Format
    {
        Reset_all = 0,
        Bold = 1,
        Dim = 2,
        Underline = 4,
        Blink = 5,
        Inverted = 7,
        Hidden = 8,
    };

    class Modifier
    {
        Format format;

    public:
        Modifier(Format pFmt) : format(pFmt) {}
        friend std::ostream &
        operator<<(std::ostream &os, const Modifier &mod)
        {
            return os << "\e[" << mod.format << "m";
        }
    };
} // namespace TermFormat

static const TermFormat::Modifier bold(TermFormat::Bold);
static const TermFormat::Modifier reset(TermFormat::Reset_all);
static const TermColor::Modifier l_magenta(TermColor::FG_LIGHT_MAGENTA);
static const TermColor::Modifier green(TermColor::FG_GREEN);
static const TermColor::Modifier yellow(TermColor::FG_YELLOW);
static const TermColor::Modifier def(TermColor::FG_DEFAULT);

#endif /* TERM_COLOR_H */