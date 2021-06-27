
AUTOMAKE_OPTIONS = foreign 1.9

EXTRA_DIST = TOC.md

bin_PROGRAMS = myprog

check_PROGRAMS = test_mymodule
TESTS = test_mymodule

myprog_SOURCES = myprog.c mymodule.c
myprog_CFLAGS = $(READLINE_CFLAGS) -DCONFIG_DIR=\"$(sysconfdir)\"
myprog_LDFLAGS = $(READLINE_LIBS)

test_mymodule_SOURCES = test_mymodule.c mymodule.c
test_mymodule_CFLAGS = $(READLINE_CFLAGS) -O0 -g
test_mymodule_LDFLAGS = $(READLINE_LIBS)
