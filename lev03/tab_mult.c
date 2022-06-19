/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:36:13 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/09 15:07:16 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	long nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int	ft_atoi(char *s)
{
	int i;
	int si;
	int n;

	i = 0;
	si = 1;
	n = 0;
	while ((s[i] >= 9 && s[i] <= 13) || (s[i] == 32))
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			si = si * (-1); 
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return (n * si);
	
	
}

void	ft_mult(char *s)
{
	int nbr;
	int i;
	int r;

	nbr = ft_atoi(s);
	i = 1;
	while (i <= 9)
	{
		ft_putnbr(nbr);
		write(1, " " , 1);
		write(1, "*" , 1);
		write(1, " " , 1);
		ft_putnbr(i);
		write(1, " " , 1);
		write(1, "=", 1);
		write(1, " " , 1);
		r = nbr * i;
		ft_putnbr(r);
		write(1, "\n", 1);
		i++;
	}
	
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_mult(av[1]);
	}
	write(1, "\n", 1);
}