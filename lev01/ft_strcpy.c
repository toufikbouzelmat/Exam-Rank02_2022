/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:18:09 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/01 16:29:42 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;
	int n;

	i = 0;
	n = ft_strlen(s1);
	s2 = (char *)malloc((n * 1) + 1);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int main()
{
	char *s1 = "test";
	char *s2 = "raja";

	printf("%s\n",ft_strcpy(s1,s2));
}