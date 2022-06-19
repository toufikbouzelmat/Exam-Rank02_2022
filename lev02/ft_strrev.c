/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 04:36:22 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/06 05:15:43 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<string.h>

int	ft_strlen(char *s)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	char tmp;
	int i;
	int len;

	i = 0;
	tmp = 0;
	len = ft_strlen(str);
	len--;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

int	main()
{
	char str[] = "dlrow, olleh";
	printf("ft_strrev:%s\n",ft_strrev(str));
}