/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:12:32 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/24 14:43:31 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*param_list;
	t_list	*temp;
	int		i;

	i = 0;
	temp = NULL;
	if (ac <= 0)
		return (NULL);
	while (i < ac)
	{
		param_list = ft_create_elem(av[i]);
		param_list->next = temp;
		temp = param_list;
		i++;
	}
	return (param_list);
}
