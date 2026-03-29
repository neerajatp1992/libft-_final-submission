/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:49:06 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/29 17:10:20 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	const unsigned char	*source;
	unsigned char		*dest;
	size_t				i;

	if (!to && !from)
		return (NULL);
	source = (const unsigned char *)from;
	dest = (unsigned char *)to;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (to);
}

// int main()
// {
// 	char s[6] = "Hello";
// 	char d[9] = "world123";

// 	ft_memcpy(&d, &s, 4);

// 	printf("%s", d);
// }
