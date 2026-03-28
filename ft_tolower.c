/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 13:31:23 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 16:46:31 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_tolower(int ch)
{
	int	value;

	value = ch;
	if (ch >= 65 && ch <= 90)
	{
		value = ch + 32;
	}
	return (value);
}

// int main (void)
// {
//     int result;
//     char str[6]="HElLo";
//     int i=0;
//     while(str[i]!='\0')
//     {
//         result=ft_tolower(str[i]);
//         printf(" %c\t",result);
//         i++;
//     }}
