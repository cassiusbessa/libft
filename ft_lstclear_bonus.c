/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:43:34 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/31 21:43:36 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*current;

	if (!del || !lst || !*lst)
		return ;
	current = *lst;
	while (current)
	{
		*lst = current->next;
		del(current->content);
		free(current);
		current = *lst;
	}
	*lst = NULL;
}
