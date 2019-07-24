/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:09:16 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/24 13:29:36 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*ptr;
	unsigned int	i;

	i = 0;
	while (i < nbr)
	{
		if (begin_list == NULL)
			return (NULL);
		ptr = begin_list->next;
		i++;
	}
	return (ptr);
}
