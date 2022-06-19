/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 01:09:45 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/13 01:14:20 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_pcgd(unsigned int nb1, unsigned int nb2)
{
	int	i;

	i = nb1;
	while (i > 0)
	{
		if (nb1 % i == 0 && nb2 % i == 0)
			return (i);
		i--;
	}
	return (i);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n",ft_pcgd(atoi(av[1]),atoi(av[2])));
	}
	write(1, "\n", 1);
}