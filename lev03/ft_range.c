/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:02:36 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/07/22 06:37:44 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>


int	*ft_range(int start, int end)
{
	unsigned int	size;
	int	*ret;
	int	*ptr;

	size = (end - start);
	ptr = (int *)malloc(sizeof(int) * size);
	ret = NULL;
	if (start <= end)
	{
		ret = ptr;
		while (start <= end)
		{
			*ptr = start;
			printf("%d\n",*ptr);
			ptr++;
			start++;
		}
	}
	else if (start >= end)
	{
		ret = ptr;
		while (start >= end)
		{
			*ptr = start;
			printf("%d\n",*ptr);
			ptr++;
			start--;
		}
	}
	return (ret);
}

int main()
{

	ft_range(0, -3);

	return (0);
}