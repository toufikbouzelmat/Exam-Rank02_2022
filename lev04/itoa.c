/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 06:11:58 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/13 06:25:54 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	absolutevalue(int nbr)
{
	if (nbr < 0)
		return(-nbr);
	return (nbr);
}

int	ft_len_nbr(int nbr)
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

	len = ft_len_nbr(nbr);
	str = (char *)malloc((len + 1) * sizeof(char));
	str[len] = '\0';
	if (nbr < 0)
		str[0] = '-';
	else if (nbr == 0)
		str[0] = '0';
	i = 0;
	while (nbr != 0)
	{
		--len;
		str[len] = absolutevalue(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}

int	main()
{
	int nbr = -65726;
	printf("%s\n",ft_itoa(nbr));
}