/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:28:22 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/08/11 21:28:24 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int main(int ac, char **av)
{
    int i;
    
    i = 0;
    if (ac == 2)
    {
        while (av[1][i] == ' ' && av[1][i] == '\t')
            i++;
        while (av[1][i] != '\0')
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
            {
                if (av[1][i + 1] > 32 && av[1][i] != '\0')
                    write(1, " ", 1);
            }
            else if (av[1][i] != ' ' && av[1][i] != '\t')
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}