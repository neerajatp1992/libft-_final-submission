/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 18:29:50 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 14:51:23 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *str, size_t n);

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	tot;
	void	*ptr;	

	if (nitems != 0 && size > (size_t)-1 / nitems)
		return (NULL);
	tot = nitems * size;
	ptr = malloc(tot);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, tot);
	return (ptr);
}
// int main() {
//     int *ptr = (int *)ft_calloc(5, sizeof(int));

//     // Checking if failed or pass
//     if (ptr == NULL) {
//         printf("Allocation Failed");
//         exit(0);
//     }

//     // No need to populate as already
//     // initialized to 0

//     // Print the array
//     for (int i = 0; i < 5; i++)
//         printf("%d ", ptr[i]);
//     return 0;
// }