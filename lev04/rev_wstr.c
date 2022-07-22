/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 02:40:51 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/07/22 06:50:28 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

void	ft_rev_wstr(char *str)
{
	int	i;
	int	first_word;
	int j;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		while (i >= 0 && (str[i] == '\0' || str[i] == ' ' || str[i] == '\t'))
			i--;
		j = i;
		while (j >= 0 && str[j] != ' ' && str[j] != '\t')
			--j;
		if (first_word == 0)
			write(1, " ", 1);
		write(1, str + j + 1, i - j);
		first_word = 0;
		i = j;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_rev_wstr(av[1]);	
	}
	write(1, "\n", 1);
}
