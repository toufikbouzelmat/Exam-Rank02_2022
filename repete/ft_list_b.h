/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_b.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:51:22 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/29 23:52:21 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_B_H
# define FT_LIST_B_H

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif