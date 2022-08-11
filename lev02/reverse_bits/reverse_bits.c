/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:27:46 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/08/11 21:27:48 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <math.h>
#include <stdio.h>

int	ft_pow(int n,int p)
{
	int	i;
	int ret = n;

	i = 1;
	while (i < p)
	{
		ret *= n;
		i++;
	}
	printf("%d\n", ret);
	return (ret);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	int j;
	char c;

	j = 7;
	i = 0;
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

int main()
{
	unsigned char k = reverse_bits('A');
	int i;

	i = 7;
	ft_pow(9,3);
	while (i >= 0)
	{
		if (k >> i & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}