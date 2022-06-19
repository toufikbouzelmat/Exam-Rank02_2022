/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 07:34:20 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/07 08:32:26 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	skip_space(char *str, int i)
{
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_word_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		i++;
	}
	return (i);
	
}

void	ft_epur(char *str)
{
	int	i;
	int len;
	int	first_word;

	first_word = 1;
	i = 0;
	i = skip_space(str,i);
	while (str[i] != '\0')
	{
		if (first_word == 0)
			write(1, " ", 1);
		len = ft_word_len(str + i);
		write(1, str + i, len);
		i = i + len;
		first_word = 0;
		i = skip_space(str, i);
	}
	
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		ft_epur(av[1]);
	}
	write(1, "\n", 1);
}