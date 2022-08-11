/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:27:04 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/08/11 21:27:07 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int i;
    int *ns;
    int len;

    len = ft_strlen(src);
    ns = (char *)malloc(sizeof(char) * (len + 1));
    if (!ns)
        return (NULL);
    i = 0;
    while (src[i] != '\0')
    {
        ns[i] = src[i];
        i++;
    }
    ns[len] = '\0';
    return (ns);
}