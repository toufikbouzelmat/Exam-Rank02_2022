/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:02:36 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/08 18:23:50 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

// int *ft_range(int start, int end)
// {
// 	int	i;
// 	int *tab;
// 	int *ret;
// 	int n;

// 	n = end - start;
	
// 	i = 0;
// 	if (n)
// 	{
// 		tab = (int *)malloc(4 * n);
// 		if (tab)
// 		{
// 			ret = tab;
// 			while (start <= end)
// 			{
// 				tab[i] = start;
// 				start++;
// 				i++;
// 			}
// 			return (ret);
// 		}
// 	}
// 	return (NULL);
// }

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
				*ptr = start;
				ptr++;
				start++;
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