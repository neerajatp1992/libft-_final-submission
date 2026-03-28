/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 14:57:46 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/27 15:39:49 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
// int main()
// {
//     t_list *head=NULL;
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
//     int leng;
//     node1=ft_lstnew("Node 1");
//     node2=ft_lstnew("Node 2");
//     node3=ft_lstnew("Node 3");
//     ft_lstadd_front(&head,node1);
//     ft_lstadd_front(&head,node2);
//     ft_lstadd_front(&head,node3);
//     leng=ft_lstsize(head);
//     printf("length of linked list %d",leng);

// }