/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 02:48:00 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/30 03:51:19 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int s;

	n = 0;
	s = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
	{
		s = s * (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * s);
}

int	main()
{
	char s[4]="-548";
	
	printf("atoi original:%d\n",atoi(s));
	printf("ft_atoi:%d",ft_atoi(s));
}