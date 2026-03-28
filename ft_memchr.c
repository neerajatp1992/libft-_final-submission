/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 14:12:29 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 18:09:00 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(void *ptr, int value, size_t size)
{
	const unsigned char	*p;
	unsigned char		val;
	size_t				i;

	p = (unsigned char *)ptr;
	val = (unsigned char)value;
	i = 0;
	while (i < size)
	{
		if (p[i] == val)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}

// int main ()
// {
// char myStr[] = "Hello World!";
// char *myPtr = (char*)ft_memchr(myStr, 'o', 12);
// if (myPtr != NULL) {
//   printf("%s", myPtr);
// }
// }