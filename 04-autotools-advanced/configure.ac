
# Autoconf required version
AC_PREREQ([2.69])

# Package information
AC_INIT([myprog], [1.0.0], [yossi@gmail.com])

# We use Automake
AM_INIT_AUTOMAKE
AM_SILENT_RULES([yes])

# We also use Libtool
LT_INIT

# Where is my source dir?
AC_CONFIG_SRCDIR([mymodule.c])
AC_CONFIG_HEADERS([config.h])

# Check what we use
AC_CHECK_HEADERS([stdio.h stdlib.h])

# Programs we need
AC_PROG_CC

# Built-in checks for common library functions
AC_FUNC_MALLOC

# Readline
AC_ARG_ENABLE([readline],
              [AS_HELP_STRING([--disable-readline],
                              [Disable readline support])])

AS_IF([test "x$enable_readline" != "xno"], [
    PKG_CHECK_MODULES([READLINE],
                      [readline],
                      AC_DEFINE([HAVE_READLINE], [1], [define to enable libreadline support]))
])

# Autoconf outputs
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
