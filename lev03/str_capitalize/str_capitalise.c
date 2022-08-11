/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalise.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:30:25 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/08/11 21:30:27 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void    str_capitalise(char *str)
{
    int i;

   i = 0;
   while (str[i] != '\0')
   {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if (i > 0 && (str[i] >= 'A' && str[i] <= 'Z') && (str[i - 1] != ' ' && str[i - 1] != '\t'))
            str[i] += 32;
        else if (i > 0 && (str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
   }
   

}

int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac > 1)
    {
        while (ac > i)
        {
            str_capitalise(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}