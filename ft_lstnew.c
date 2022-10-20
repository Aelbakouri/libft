/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:37:03 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/20 11:41:10 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lnew;

	lnew = malloc(sizeof(t_list));
	if (!lnew)
		return (NULL);
	lnew -> content = content;
	lnew -> next = NULL;
	return (lnew);
}

// int main ()
// {
// 	t_list	*head;
// 	t_list	*node1;

// 	head = ft_lstnew(ft_strdup("hello world"));
// 	node1 = ft_lstnew("head");
// 	printf("%p\t%s", head -> next, node1 -> content);
// }
