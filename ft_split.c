/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 11:06:02 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/28 13:05:19 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	word_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*word_dup(const char *start, int len)
{
	char	*word;
	int		i;

	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **arr, int i)
{
	while (i >= 0)
		free(arr[i--]);
	free(arr);
}

static int	ft_check_match(char const *src, char c, int check_ind)
{
	int	i;

	i = 0;
	if (check_ind == 1)
	{
		while (src[i] == c)
			i++;
	}
	else
	{
		while (src[i] && src[i] != c)
			i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		start;

	result = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start = ft_check_match(s, c, 0);
			result[i] = word_dup(s, start);
			if (!result[i])
				return (free_all(result, i), NULL);
			i++;
			s += start;
		}
	}
	result[i] = NULL;
	return (result);
}
// int main(void)
// {
// 	char **res;
// 	int i = 0;

// 	res = ft_split("SreeAAAkalaAMenon",'A');
// 	while (res[i])
// 	{
// 		printf( "%s \n", res[i]);
// 		i++;
// 	}
// 	return(0);
// }