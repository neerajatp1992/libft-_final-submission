/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 12:02:06 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 18:09:00 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i] || str1[i] == '\0' || str2[i] == '\0')
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
// int main() {
//   char myStr1[] = "ABCD";
//   char myStr2[] = "ABCE";
//   int cmp = ft_strncmp(myStr1, myStr2, 4);
//   if (cmp > 0) {
// 	printf("%s is greater than %s\n", myStr1, myStr2);
//   } else if (cmp < 0) {
// 	printf("%s is greater than %s\n", myStr2, myStr1);
//   } else {
// 	printf("%s is equal to %s\n", myStr1, myStr2);
//   }
// }