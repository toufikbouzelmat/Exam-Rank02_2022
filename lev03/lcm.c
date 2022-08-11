#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void    ft_swap(unsigned int *a, unsigned int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int ret1;
    unsigned int ret2;

    if (a == 0 || b == 0)
        return (0);

    if (a > b)
    {
        ret1 = a;
        ret2 = b;
    }
    else
    {
        ft_swap(&a, &b);
        ret1 = a;
        ret2 = b;
    }

    while (ret1 != ret2)
    {
        while (ret2 < ret1)
            ret2 += b;
        if (ret1 == ret2)
            return (ret1);
        ret1 += a;
    }
    return (ret1);
}

int main()
{
    int ret = lcm(72, 60);
    printf("%u\n", ret);
}