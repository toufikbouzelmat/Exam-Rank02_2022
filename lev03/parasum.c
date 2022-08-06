#include<unistd.h>
#include<stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if (n > 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + '0');
}

int main(int ac, char **av)
{
    (void)av;
    
    if (ac > 1)
    {
        ft_putnbr(ac - 1);
    }
    else
        write(1, "0", 1);
}