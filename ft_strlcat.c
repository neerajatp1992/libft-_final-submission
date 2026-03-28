/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 11:39:43 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 19:44:28 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = 0;
	dest_len = 0;
	while (dest_len < destsize && dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_len == destsize)
		return (dest_len + src_len);
	i = 0;
	while ((dest_len + i + 1) < destsize && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}

// int main()
// {
//   size_t result;
//   char d[10];

//   result = ft_strlcat(d, "Hello world welcome", sizeof(d));
//   printf("length of source string %zu\n", result);
//   printf("copied string %s", d);
// }