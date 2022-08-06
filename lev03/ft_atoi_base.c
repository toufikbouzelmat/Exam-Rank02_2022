#include<unistd.h>
#include<stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int n;
    int s;

    i = 0;
    s = 1;
    n = 0;
    if (str[i] == '-')
    {
        s *= (-1);
        i++; 
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= (str_base - 1) + '0')
            n = n * str_base + str[i] - '0';
        else if (str_base > 10 && str[i] >= 'A' && str[i] <= (str_base - 11) + 'A')
            n = n * str_base + str[i] - 55;
        else if (str_base > 10 && str[i] >= 'a' && str[i] <= (str_base - 11) + 'a')
            n = n * str_base + str[i] - 87;
        else
            return (n * s);
        i++;
    }
    return (n * s);
}

int main()
{
    printf("%d\n", ft_atoi_base("ff", 16));
}