/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:27:23 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/08/11 21:27:26 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void    ft_inter(char *s1, char *s2)
{
    int tab[128] = {0};
    int i;
    int j;
    int index;

    i = 0;
    while (s1[i] != '\0')
    {
        index = s1[i];
        j = 0;
        while (s2[j] != '\0')
        {
            if (tab[index] == 0 && s1[i] == s2[j])
            {
                tab[index] = 1;
                write(1, &s1[i] ,1);
            }
            j++;
        }
        i++;
    }
    
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_inter(av[1],av[2]);
    }
    write(1, "\n", 1);
}