/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:11:25 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 20:00:13 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int search_str)
{
	int				i;
	int				str_len;
	unsigned char	ch;

	str_len = 0;
	ch = (unsigned char)search_str;
	while (str[str_len] != '\0')
		str_len++;
	i = str_len;
	while (i >= 0)
	{
		if (str[i] == ch)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

// int main() {
//   char *s;
//   s = ft_strrchr("Hello World", 'W');
//   printf("%s", s);
// }