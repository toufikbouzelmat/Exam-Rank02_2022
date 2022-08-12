/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 06:11:58 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/07/22 06:49:41 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_len_nbr(long nbr)
{
	int i;

	i = 0;
	if (nbr <= 0)
		++i;
	while (nbr != 0)
	{
		++i;
		nbr = nbr / 10;	
	}
	return (i);
	
}

char	*ft_itoa(int nbr)
{
	int	len;
	int i;
	char *str;
	long	n;
	
	n = nbr;
	len = ft_len_nbr(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	str[len] = '\0';
	if (n < 0)
	{	
		str[0] = '-';
		n = -n;
		i = 1;
	}
	else if (n == 0)
		str[0] = '0';
	i = 0;
	while (n != 0)
	{
		--len;
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

int	main()
{
	int nbr = 65726;
	printf("%s\n",ft_itoa(nbr));
}
