/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:44:09 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/29 21:45:42 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list(t_list *begin_list)
{
    if (begin_list == 0)
        return (0);
    else
        return (1 + ft_list(begin_list->next));
}