/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:47:41 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/29 21:56:25 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>


void ft_num(int  a, int b)
{
    int n = a;
    
    while (n > 0)
    {
        if (a % n == 0 && b % n == 0)
        {
            printf("%d", n);
            return;
        }
        --n;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        ft_num(atoi(av[1]),atoi(av[2]));
    write(1, "\n", 1);
}