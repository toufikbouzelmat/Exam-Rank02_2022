/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:30:33 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/08/11 21:30:36 by tbouzalm         ###   ########.fr       */
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
    if (n > 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + '0');
}

void    tab_mult(int n)
{
    int i;
    int r;

    i = 1;
    while (i <= 9)
    {
        ft_putnbr(i);
        write(1, " * ", 3);
        ft_putnbr(n);
        write(1, " = ", 3);
        r = i * n;
        ft_putnbr(r);
        write(1, "\n", 1);
        i++; 
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        tab_mult(atoi(av[1]));
    }
    else
        write(1, "\n", 1);
}