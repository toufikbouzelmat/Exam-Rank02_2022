/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 00:37:20 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/14 02:37:24 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void	ft_rostring(char *str)
{
	int	i;
	char *first_word;
	int len_first_word;

	i = 0;
	while (str[i] == '	')
	{
		i++;
	}
	i = 0;
	while (str[i] != ' ')
	{
		i++;
	}
	len_first_word = i;
	first_word = (char *)malloc((len_first_word + 1) * 1);
	i = 0;
	while (str[i] != ' ' )
	{
		first_word[i] = str[i];
		i++;
	}
	first_word[i] = '\0';
	while (str[i] == ' ' || str[i] == '	')
		i++;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, " ", 1);
	i = 0;
	while (first_word[i] != '\0')
	{
		write(1, &first_word[i], 1);
		i++;
	}
	
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_rostring(av[1]);
	}
	write(1, "\n", 1);
}