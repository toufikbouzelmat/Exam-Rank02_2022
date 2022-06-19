/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:15:56 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/06/08 15:47:07 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include<unistd.h>
 #include<stdio.h>
 
 int	ft_strlen(char *s)
 {
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
 }
 
 void	ft_chouf(char *av1, char *av2)
 {
	 int	i;
	 int	j;
	 int	k=0;

	 i = 0;
	 while (av1[i] != '\0')
	 {
		j = 0;
		while (av2[j] != '\0' && av2[j] != av1[i])
		{
			j++;
		}
		if (av2[j] == '\0')
		{
			write(1, "0", 1);
			return;
		}
		j++;
		i++;
	 }
	 write(1, "1", 1);
}
 
 int	main(int ac, char **av)
 {
	 if (ac == 3)
	 {
		ft_chouf(av[1],av[2]);
	 }
	 write(1, "\n", 1);
 }