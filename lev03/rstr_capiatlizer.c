/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capiatlizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 05:13:30 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/13 00:13:38 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int		ft_islow(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int		ft_isup(char c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

void	ft_str(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i + 1] == '\0' && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			write(1, &str[i], 1);
		}
		else if (str[i + 1] == '\0' && str[i] >= 'A' && str[i] <= 'Z')
			write(1, &str[i], 1);
		else
		{
			if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if ((str[i + 1] != ' ') && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			else if ((i > 0) && (str[i + 1] == ' ' || str[i + 1] == '\t') && 
			(str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			write(1, &str[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}


int	main(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		ft_str(av[i]);
		i++;
	}
}