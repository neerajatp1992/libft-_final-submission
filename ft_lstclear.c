/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:08:11 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 15:20:51 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content);
char	*ft_strdup(const char *s);

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
// void del_content(void *content)
// {
// 	free(content);
// }

// void print_list(t_list *temp)
// {
// 	while(temp) {
//       printf("%s \n",(char*)temp->content);
//       temp = temp->next;
//     }

// }
// int main()
// {
//     t_list *node1;
// 	t_list *node2;
// 	t_list *node3;

// 	node1=ft_lstnew(ft_strdup("Hello"));
// 	node2=ft_lstnew(ft_strdup("node2"));
// 	node3=ft_lstnew(ft_strdup("node3"));
// 	node1 ->next=node2;
// 	node2 ->next=node3;
// 	printf("Before deletion\n");
// 	print_list(node1);
// 	ft_lstclear(&node1,del_content);
// 	printf("After deletion\n");
// 	print_list(node1);
// }