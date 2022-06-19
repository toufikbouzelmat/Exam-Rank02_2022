/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 02:17:54 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/13 02:37:34 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_add_prime_sum(int nb)
{
	int	i;
	int	sum;

	i = 2;
	sum = 0;
	while (i <= nb)
	{
		if (is_prime(i) == 1)
			sum += i;
		++i;
	}
	return (sum);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n",ft_add_prime_sum(atoi(av[1])));
	}
	write(1, "\n", 1);
}