/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:15:38 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/12 02:27:42 by tbouzalm         ###   ########.fr       */
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
		if (i == 0 && ft_islow(str[i]))
			str[i] -= 32;
		else if (ft_islow(str[i]) && (str[i - 1] == ' ' || str[i - 1] == '	'))
		{
			str[i] -= 32;
			sleep(5);
		}
		else if (ft_isup(str[i]) && (i > 0 && str[i - 1] != ' ' && str[i - 1] != '	'))
			str[i] += 32;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
		write(1, "\n", 1);
	i = 1;
	while (i < ac)
	{
		ft_str(av[i]);
		i++;
	}
}