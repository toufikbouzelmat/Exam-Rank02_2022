/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 03:45:31 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/30 03:54:50 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main()
{
	char *s="hymze";
	char *reject = "hymze";
	
	printf("strcspn:%lu\n",strcspn(s,reject));
	printf("ft_strcspn:%lu",ft_strcspn(s,reject));

	/*
		fonction strcspn fonction kat9aren *reject b *s kantchekiw reject caractere
		par caractere 
		katreturne che7al la longeur limal9atch fiha dak lcaractere lifreject.
	*/
}