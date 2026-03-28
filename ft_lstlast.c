/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 14:53:39 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 15:29:23 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main()
// {
//     t_list *head=NULL;
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
//     t_list *node;	
//     node1=ft_lstnew("Node 1");
//     node2=ft_lstnew("Node 2");
//     node3=ft_lstnew("Node 3");
//     ft_lstadd_front(&head,node1);
//     ft_lstadd_front(&head,node2);
//     ft_lstadd_front(&head,node3);
//     node=ft_lstlast(head);
//     printf("%s->", (char*)node->content);

// }