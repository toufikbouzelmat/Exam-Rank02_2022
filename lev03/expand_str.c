/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:07:04 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/08 16:48:33 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_len_av(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ')
		i++;
	return (i);
}

void	ft_esp(char *av)
{
	int	len;
	int	first_word;
	int	i;

	first_word = 1;
	i = 0;
	while (*av != '\0')
	{
		while (*av == ' ' || *av == '\t')
			++av;
		len = ft_len_av(av);
		if (len > 0 && first_word == 0)
			write(1, "   ", 3);
		first_word = 0;
		write(1, av, len);
		av = av + len;
	}
	
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_esp(av[1]);
	}
	write(1, "\n", 1);
}