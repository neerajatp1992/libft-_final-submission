/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 12:34:00 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 19:48:40 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (str2[0] == '\0')
		return ((char *)str1);
	while (i < len && str1[i])
	{
		j = 0;
		while (str2[j] && (i + j) < len && str1[i + j] == str2[j])
		{
			j++;
		}
		if (str2[j] == '\0')
			return ((char *)(str1 + i));
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char *main_string = "Eeny meeny miny moe!";
//     char *sub_string = "moe";
//     char *location;

//     location = ft_strnstr(main_string,sub_string,20);
//     if(location == NULL)
//         printf("Can't find '%s' within 20 characters of '%s'\n",
//             sub_string,main_string);
//     else
//         printf("Found '%s' within 20 characters of '%s'\n",
//             sub_string,main_string);

//     return(0);
// }