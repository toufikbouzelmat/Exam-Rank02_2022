/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 05:23:07 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/29 05:29:33 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int     is_power_of_2(unsigned int n)
{
    int i;

    i = 1;
    while (i <= n)
    {
        if (i == n)
            return (1);
        i = i * 2;
    }
    return (0);
}


int main()
{
    printf(" n = %u\n",is_power_of_2(8));
}