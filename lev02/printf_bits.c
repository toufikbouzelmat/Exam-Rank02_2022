/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_bits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 04:44:04 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/08 11:22:29 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_print_bits(unsigned char octet)
{
	int	i;
	
	i = 8;
	while (i >= 0)
	{
		if (octet >> i & 1)
		{
			write(1, "1", 1);
		}
		else
			write(1, "0", 1);
		i--;
	}
}

int	main()
{
	ft_print_bits(2);
}
