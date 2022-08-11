/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:29:59 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/08/11 21:30:01 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void    pgcd(int n1, int n2)
{
    int n;

    n = n1;
    while (n)
    {
        if (n1 % n == 0 && n2 % n == 0)
        {
            printf("%d",n);
            return ;
        }
        n--;
    }
    
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        pgcd(atoi(av[1]),atoi(av[2]));
    }
    else
        write(1, "\n", 1);
}