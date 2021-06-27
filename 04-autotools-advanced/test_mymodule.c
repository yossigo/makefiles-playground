#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "mymodule.h"

int main(int argc, char *argv[])
{
    return (add_func(1, 1) == 2);
}
