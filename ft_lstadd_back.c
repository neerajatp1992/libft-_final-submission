/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:56:30 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 15:16:15 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

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
// 	printf("Before adding back\n");
// 	print_list(node1);

// 	ft_lstadd_back(node2,del_content);
// 	printf("After deletion\n");
// 	print_list(node1);

// }
