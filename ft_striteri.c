/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 11:42:28 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 16:33:10 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void	my_func(unsigned int i, char *c)
// {
// 	*c=*c+i;
// }

// int	main(void)
// {
// 	char a[]="aaaa";
// 	ft_striteri(a, my_func); 
// 	printf("%s",a);	
// 	return (0);
// }