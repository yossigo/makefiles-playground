#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef HAVE_STDIO_H
#include <stdio.h>
#endif

#include "mymodule.h"

int main(int argc, char *argv[])
{
    printf("If I had a config file, it was %s/myprog.conf\n", CONFIG_DIR);
    module_func();
    return 0;
}
