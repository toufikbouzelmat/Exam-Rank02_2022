/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 04:19:41 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/06 04:35:50 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char	*ft_strpbrk( char *s1,char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				return (&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	printf("%s\n",strpbrk("dima raja akhouya", "ya"));
	printf("ft_strpbrk:%s",ft_strpbrk("dima raja akhouya", "ya"));
}