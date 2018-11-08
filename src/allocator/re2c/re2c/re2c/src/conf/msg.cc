#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include "config.h"
#include "src/conf/msg.h"
#include "src/conf/ver_to_vernum.h"

extern const char *help; // autogenerated

namespace re2c {

void error (const char * fmt, ...)
{
    fprintf (stderr, "re2c: error: ");

    va_list args;
    va_start (args, fmt);
    vfprintf (stderr, fmt, args);
    va_end (args);

    fprintf (stderr, "\n");
}

void fatal(const char *fmt, ...)
{
    fprintf (stderr, "re2c: error: ");

    va_list args;
    va_start (args, fmt);
    vfprintf (stderr, fmt, args);
    va_end (args);

    fprintf (stderr, "\n");
    exit(1);
}

void fatal_l(uint32_t line, const char *fmt, ...)
{
    fprintf (stderr, "re2c: error: line %u: ", line);

    va_list args;
    va_start (args, fmt);
    vfprintf (stderr, fmt, args);
    va_end (args);

    fprintf (stderr, "\n");
    exit(1);
}

void fatal_lc(uint32_t line, uint32_t column, const char *fmt, ...)
{
    fprintf (stderr, "re2c: error: line %u, column %u: ", line, column);

    va_list args;
    va_start (args, fmt);
    vfprintf (stderr, fmt, args);
    va_end (args);

    fprintf (stderr, "\n");
    exit(1);
}

void error_arg (const char * option)
{
    error ("expected argument to option %s", option);
}

void warning_start (uint32_t line, bool error)
{
    const char * msg = error ? "error" : "warning";
    fprintf (stderr, "re2c: %s: line %u: ", msg, line);
}

void warning_end (const char * type, bool error)
{
    if (type != NULL)
    {
        const char * prefix = error ? "error-" : "";
        fprintf (stderr, " [-W%s%s]", prefix, type);
    }
    fprintf (stderr, "\n");
}

void warning (const char * type, uint32_t line, bool error, const char * fmt, ...)
{
    warning_start (line, error);

    va_list args;
    va_start (args, fmt);
    vfprintf (stderr, fmt, args);
    va_end (args);

    warning_end (type, error);
}

void usage()
{
    fprintf(stdout, "%s", help);
}

void vernum ()
{
    const std::string vn = ver_to_vernum(PACKAGE_VERSION);
    if (vn.empty()) {
        error("failed to convert version to vernum");
        exit(1);
    }
    printf ("%s\n", vn.c_str ());
}

void version ()
{
    printf ("re2c %s\n", PACKAGE_VERSION);
}

std::string incond (const std::string & cond)
{
    std::string s;
    if (!cond.empty ())
    {
        s += "in condition '";
        s += cond;
        s += "' ";
    }
    return s;
}

} // namespace re2c
