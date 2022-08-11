/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:29:14 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/08/11 21:29:18 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int absolut_val(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

int *ft_range(int start, int end)
{
    int i;
    int number_of_int;
    int step;
    int *tab;

    number_of_int = 1 + absolut_val(end - start);
    tab = (int *)malloc(sizeof(int *) * number_of_int);
    if (start > end)
        step = -1;
    else
        step = 1;
    i = 0;
    while (i < number_of_int)
    {
        tab[i] = start;
        printf("%d\n",tab[i]);
        start = start + step;
        i++;
    }
    return (tab);
}

int main()
{
    ft_range(0,-3);
}