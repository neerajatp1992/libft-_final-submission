/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 13:59:59 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 15:17:43 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (lst)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int main()
// {
//     t_list *head=NULL;
//     t_list *node1;
//     t_list *node2;
//     node1=ft_lstnew("Node 1");
//     node2=ft_lstnew("Node 2");
//     ft_lstadd_front(&head,node1);
//     ft_lstadd_front(&head,node2);
//     t_list *current=head;
//     while(current)
//     {
//         printf("%s->", (char*)current->content);
//         current=current->next;
//     }

//     printf("null\n");
//     free(node1);
//     free(node2);

// }