/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:26:57 by lelanglo          #+#    #+#             */
/*   Updated: 2024/10/09 21:26:57 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*parcours;

	if (lst != NULL && *lst != NULL)
	{
		parcours = *lst;
		while (parcours->next != NULL)
			parcours = parcours->next;
		parcours->next = new;
	}
	else if (lst != NULL)
		*lst = new;
}
