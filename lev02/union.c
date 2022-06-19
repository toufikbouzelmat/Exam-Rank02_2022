/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 00:21:10 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/07 04:49:08 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void	ft_union(char *str1, char *str2)
{
	int	i;
	int	j;
	int idx;
	int	tab[128] = {0};
	
	j = 0;
	while (str1[j] != '\0')
	{
		idx = str1[j];
		if (tab[idx] == 0)
		{
			write(1, &str1[j], 1);
			tab[idx] = 1;
		}
		j++;
	}
	i = 0;
	while (str2[i])
	{
		idx = str2[i];
		if (tab[idx] == 0)
		{
			write(1, &str2[i], 1);
			tab[idx] = 1;
		}
		i++;
	}
	
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1],av[2]);	
	}
	write(1, "\n", 1);
}