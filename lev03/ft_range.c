/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:02:36 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/07/25 13:31:50 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int		absolute_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int		*ft_range(int start, int end)
{
	int number_of_ints;
	int *array;
	int step;
	int i;

	number_of_ints = 1 + absolute_value(end - start);
	array = malloc(sizeof(int) * number_of_ints);

	if (start > end)
		step = -1;
	else
		step = 1;

	i = 0;
	while (i < number_of_ints)
	{
		array[i] = start;
		printf("%d\n",array[i]);
		start = start + step;
		++i;
	}
	return (array);
}

int main()
{

	ft_range(0, -3);

	return (0);
}