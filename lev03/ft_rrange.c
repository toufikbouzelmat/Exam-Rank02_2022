/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 02:41:07 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/07/22 06:38:40 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int start, int end)
{
	unsigned int	size;
	int	*ret;
	int	*ptr;

	size = (end - start);
	ptr = (int *)malloc(sizeof(int) * size);
	ret = NULL;
	if (end >= start)
	{
		ret = ptr;
		while (end >= start)
		{
			*ptr = end;
			printf("%d\n",*ptr);
			ptr++;
			end--;
		}
	}
	else if (start >= end)
	{
		ret = ptr;
		while (start >= end)
		{
			*ptr = end;
			printf("%d\n",*ptr);
			ptr++;
			end++;
		}
	}
	return (ret);

}
int main()
{


	ft_range(0, -3);

	return (0);
}