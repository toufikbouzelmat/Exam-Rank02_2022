/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:28:14 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/08/11 21:28:16 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + '0');
}

int is_prime(int nb)
{
    int i;

    i = 2;
    while (i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int add_prime_sum(int nb)
{
    int i;
    int prime_sum;

    i = 2;
    prime_sum = 0;
    if (nb <= 0)
        return (0);
    while (i <= nb)
    {
        if (is_prime(i))
            prime_sum += i;
        i++;
    }
    return (prime_sum);
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_putnbr(add_prime_sum(atoi(av[1])));
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}