/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 02:41:07 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/13 03:19:46 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int start, int end)
{
	int	size;
	int	*ret;
	int	*ptr;

	size = end - start;
	if (size)
	{
		ptr = (int *)malloc(sizeof(int) * size);
		if (ptr)
		{
			ret = ptr;
			while (start <= end)
			{
				*ptr = end;
				end--;
				ptr++;
			}
			return (ret);
		}
	}
	return (NULL);
}

int main()
{
	int	*lst;
	int	*head;

	lst = ft_range(0, 16);
	head = lst;
	while (*lst)
	{
		printf("%i\n", *lst);
		lst++;	
	}
	free(head);
	return (0);
}