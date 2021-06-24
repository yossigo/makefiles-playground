
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

# Programs we need
AC_PROG_CC

# Autoconf outputs
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
