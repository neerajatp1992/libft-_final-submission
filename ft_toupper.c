/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 12:14:24 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 16:49:08 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int ch)
{
	int	value;

	value = ch;
	if (ch >= 97 && ch <= 122)
	{
		value = ch - 32;
	}
	return (value);
}

// int main (void)
// {
//     int result;
//     char str[6]="Hello";
//     int i=0;
//     while(str[i]!='\0')
//     {
//         result=ft_toupper(str[i]);
//         printf(" %c\t",result);
//         i++;
//     }

// }