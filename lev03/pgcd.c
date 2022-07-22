/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 01:09:45 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/07/22 06:40:52 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_pcgd(unsigned int nb1, unsigned int nb2)
{
	int	n;

	n = nb2;
	while (n > 0)
	{
		if (nb1 % n == 0 && nb2 % n == 0)
			return(n);
		n--;
	}
	return (0);
}


int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d",ft_pcgd(atoi(av[1]),atoi(av[2])));
	else
		write(1, "\n", 1);
}