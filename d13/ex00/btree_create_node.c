/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 09:58:18 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/25 10:10:17 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	if ((node = malloc(sizeof(t_btree))))
	{
		node->item = item;
		node->left = NULL;
		node->right = NULL;
	}
	return (node);
}
