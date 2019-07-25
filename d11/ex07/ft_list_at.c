/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:09:16 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/24 17:30:32 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i;

	i = nbr;
	if (begin_list == NULL)
		return (NULL);
	while (begin_list && i--)
		begin_list = begin_list->next;
	if (i >= -1)
		return (begin_list);
	return (NULL);
}
