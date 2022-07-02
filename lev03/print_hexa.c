/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:14:59 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/23 06:26:46 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

void	ft_print(int n)
{
	char hex[] = "0123456789abcdef";
	
	if (n >= 16)
		ft_print(n / 16);
	write(1, &hex[n % 16], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_print(atoi(av[1]));	
	}
	write(1, "\n", 1);
}

