/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:07:05 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 16:34:56 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*join_str;
	size_t	i;
	size_t	j;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!join_str)
		return ("NULL");
	i = 0;
	while (i < s1_len)
	{
		join_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
	{
		join_str[i + j] = s2[j];
		j++;
	}
	join_str[s1_len + s2_len] = '\0';
	return (join_str);
}

// int main(void)
// {
// 	char *str1 ="Hello";
// 	char *str2="world";
// 	char *result=ft_strjoin(str1,str2);
// 	printf("%s",result);
// 	return 0;
// }