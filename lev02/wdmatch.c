/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 06:20:20 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/06 08:21:14 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_wdmatch(char *str, char *search)
{
	int	i;

	
	i = 0;
	while (str[i] != '\0')
	{
		while (*search != str[i] && *search != '\0')
			++search;
		if (*search == '\0')
			return;
		++i;
		++search;
	}
	write(1, str, i);
	
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_wdmatch(av[1],av[2]);
	write(1, "\n", 1);
}