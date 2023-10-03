#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}