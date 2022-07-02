/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_bits_ex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 05:47:52 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/30 05:38:26 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<math.h>
#include<stdio.h>

int	ft_pow(int base, int power)
{
	int result;

	result = 1;
	while (power > 0)
	{
		result = result * base;
		power--;
	}
	return (result);
	
}

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	int j;
	unsigned char c;
	
	i = 0;
	j = 7;
	while (i < 8)
	{
		if (octet >> i & 1)
		{
			c += ft_pow(2, j);
			j--;
		}
		else
			j--;
		i++;
	}
	return (c);
}

int	main()
{
	unsigned char test = reverse_bits('A');
	int	i = 7;
	while (i >= 0)
	{
		if (test >> i & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
	
}

