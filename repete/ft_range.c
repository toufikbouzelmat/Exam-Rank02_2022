/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:57:26 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/30 02:39:34 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int     *ft_range(int start, int end)
{
    unsigned int size;
    int *ptr;

    size = (end - start);
    ptr = (int *)malloc(size * sizeof(int *));
    if (start < end)
    {
        while (start <= end)
        {
            *ptr = start;
            printf("%d\n",*ptr);
            start++;
            ptr++;
        }
    }
    else if (start >= end)
    {
        while (start >= end)
        {
            *ptr = start;
            printf("%d\n",*ptr);
            start--;
            ptr++;
        }
    }
    
    return (ptr);
}

int main()
{
    ft_range(0,0);
}