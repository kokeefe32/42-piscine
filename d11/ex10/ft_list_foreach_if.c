/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:39:51 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/24 17:43:13 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list *ptr;

	ptr = begin_list;
	while (ptr)
	{
		if ((*cmp)(ptr->data, data_ref) == 0)
			(*f)(ptr->data);
		ptr = ptr->next;
	}
}
