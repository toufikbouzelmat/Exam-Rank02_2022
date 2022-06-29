/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 04:58:46 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/29 05:07:58 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void    print_hex(int n)
{
    char hex[]= "0123456789abcdef";
    if (n >= 16)
        print_hex(n / 16);
    write(1, &hex[n % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        print_hex(atoi(av[1]));
    }
    write(1, "\n", 1);
}