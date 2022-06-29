/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 03:34:21 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/29 03:38:32 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i;

    i = 8;
    while (i >= 0)
    {
        if (octet >> i & 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
    
}

int main()
{
    print_bits(2);
}