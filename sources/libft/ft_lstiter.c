/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunczer <agunczer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 13:52:16 by agunczer          #+#    #+#             */
/*   Updated: 2021/10/28 11:54:59 by agunczer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	while (lst->next != NULL)
// 	{
// 		f(lst->content);
// 		lst = lst->next;
// 	}
// 	f(lst->content);
// }

void	ft_lstiter(t_list *lst, int *stack_a, int *i, void (*f)(int *, int *, t_list *))
{
	while (lst->next != NULL)
	{
		f(stack_a, i, lst);
		lst = lst->next;
	}
	f(stack_a, i, lst);
}