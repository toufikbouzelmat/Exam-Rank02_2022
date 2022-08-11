/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:30:06 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/08/11 21:30:09 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void    print_hex(int n)
{
    char str[]= "0123456789abcdef";
    
    if (n > 16)
        print_hex(n / 16);
    write(1, &str[n % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        print_hex(atoi(av[1]));
    }
    else
        write(1, "\n", 1);
}