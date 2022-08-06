#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void    hidenp(char *s1, char *s2)
{
    while (*s1 != '\0')
    {
        while (*s1 != *s2 && *s2 != '\0')
            s2++;
        if (*s2 == '\0')
        {
            write(1, "0", 1);
            return ;
        }
        s2++;
        s1++;
    }
    write(1, "1", 1);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        hidenp(av[1],av[2]);
    }
    write(1, "\n", 1);
}