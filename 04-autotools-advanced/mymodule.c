#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif

#ifdef HAVE_STDIO_H
#include <stdio.h>
#endif

#ifdef HAVE_READLINE
#include <readline/readline.h>
#endif

#include "mymodule.h"

#ifdef HAVE_READLINE
char *read_input(const char *msg)
{
    return readline(msg);
}
#else
char *read_input(const char *msg)
{
    printf("%s", msg);
    fflush(stdout);

    char *buf = malloc(201);
    return fgets(buf, 200, stdin);
}
#endif

void module_func(void)
{
    printf("module_func: Hello World!\n");
    char *x = read_input("Your input>> ");
    printf("Received: %s\n", x);
}

int add_func(int a, int b)
{
    return a + b;
}
