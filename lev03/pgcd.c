/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 01:09:45 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/07/02 15:37:20 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

// int	ft_pcgd(unsigned int nb1, unsigned int nb2)
// {
// 	int	n;

// 	n = nb2;
// 	while (n >= 0)
// 	{
// 		if (nb1 % n == 0 && nb2 % n == 0)
// 			return(n);
// 		n--;
// 	}
// 	return (0);
// }

void	pcgd(int a, int b)
{
	int i;
	int gcd;

	i = 1;
	gcd = 0;
	while (i < a && i < b)
	{
		if (a % i == 0 && b % i == 0)
			gcd = i;
		i++;
	}
	printf("%d", gcd);
}

int	main(int ac, char **av)
{
	pcgd(atoi(av[1]),atoi(av[2]));
}