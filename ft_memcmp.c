/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 14:30:25 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 18:09:00 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_memcmp(void *ptr1, void *ptr2, size_t size)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)ptr1;
	p2 = (unsigned char *)ptr2;
	i = 0;
	while (i < size)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
//    char myStr1[] = "ABCD";
// char myStr2[] = "ABCE";
// int cmp = ft_memcmp(myStr1, myStr2, 4);

// if (cmp > 0) {
//   printf("%s is greater than %s\n", myStr1, myStr2);
// } else if (cmp < 0) {
//   printf("%s is greater than %s\n", myStr2, myStr1);
// } else {
//   printf("%s is equal to %s\n", myStr1, myStr2); 
// }
// }