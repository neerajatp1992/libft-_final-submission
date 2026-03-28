/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 16:34:30 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 16:52:23 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	str_length;
	size_t	i;

	str_length = ft_strlen(s);
	if (start > str_length)
		return (ft_strdup(""));
	if (len > str_length - start)
		len = str_length - start;
	sub_str = (char *)malloc(len + 1);
	if (!sub_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
// int main()
// {
//     char *st;
//     st=ft_substr("Hello World",7,3);
//     printf("%s",st);
// }
