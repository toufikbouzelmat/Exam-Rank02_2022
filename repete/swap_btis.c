/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_btis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 05:08:50 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/29 05:12:47 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

unsigned char   swap_bits(unsigned char octet)
{
    return (octet >> 4 | octet << 4);
}

int main()
{
    unsigned char test = 192;
    printf("should be 12: %d\n", swap_bits(test));
}