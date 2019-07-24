/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:31:43 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/23 12:20:03 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *ptr;
	t_list *new_elem;

	new_elem = ft_create_elem(data);
	ptr = *begin_list;
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new_elem;
	}
	else
	{
		ptr = new_elem;
	}
}
