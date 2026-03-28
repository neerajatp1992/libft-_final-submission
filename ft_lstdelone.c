/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 12:04:46 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 18:15:25 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content);
char	*ft_strdup(const char *s);

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
// 	node1->next=node3;
// 	ft_lstdelone(node2,del_content);
// 	printf("After deletion\n");
// 	print_list(node1);

// }