/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:00:55 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/07/22 02:15:01 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rot(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			str[i] += 13;
		else if (str[i] >= 'A' && str[i] <= 'M')
			str[i] += 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] -= 13;
		else if (str[i] >= 'N' && str[i] <= 'Z')
			str[i] -= 13;
		write(1, &str[i] , 1);
		i++;
	}
	
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_rot(av[1]);
	}
	write(1, "\n", 1);
	
}