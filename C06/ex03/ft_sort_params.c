#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int     i;
    int     j;
    char    *name;
    char    *arguments;

    j = 1;
    while (j < argc)
    {
        name = argv[j];
        arguments[j] = name;
        j++;
    }
    j = 0;
    while (j < 2)
    {
        printf("%c", arguments[j]);
        j++;
    }
    
}
