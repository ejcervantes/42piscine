#include <unistd.h>

int main(int argc, char *argv[])
{
    int     i;
    int     j;
    char    *name;

    j = argc - 1;
    while (j > 0)
    {
        i = 0;
        name = argv[j];
        while (name[i] != 0)
            write(1, &name[i++], 1);
        write(1, "\n", 1);
        j--;
    } 
}
