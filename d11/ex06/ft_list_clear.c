/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 09:12:09 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/24 09:14:43 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *ptr_to_free;

	if (!begin_list || !*begin_list)
		return ;
	while (*begin_list)
	{
		ptr_to_free = *begin_list;
		*begin_list = (*begin_list)->next;
		free(ptr_to_free);
	}
	*begin_list = NULL;
}
