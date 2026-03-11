
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int     i;
    char    *name;

    i = 0;
    name = argv[0];
    while (name[i] != 0)
        write(1, &name[i++], 1);
    write(1, "\n", 1);
}
