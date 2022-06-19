/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 02:31:58 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/06 02:47:09 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int i;
	int nb1;
	int nb2;
	int r;

	i = 0;
	nb1 = atoi(av[1]);
	nb2 = atoi(av[3]);
	if (ac == 4)
	{
		if (av[2][0] == '*')
			r = nb1 * nb2;
		else if (av[2][0] == '+')
			r = nb1 + nb2;
		else if (av[2][0] == '/')
			r = nb1 / nb2;
		printf("%d",r);
	}
}