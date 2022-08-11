/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:26:12 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/08/11 21:26:14 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>


int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(int ac,char **av)
{
    int i;
    int len;

    if (ac == 2)
    {
        len = ft_strlen(av[1]) - 1;
        i = 0;
        while (len >= i)
        {
            write(1, &av[1][len], 1);
            len--;
        }
    }
    write(1, "\n", 1);
}