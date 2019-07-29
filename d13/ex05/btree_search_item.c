/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:19:11 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/29 09:58:50 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void *res;

	res = NULL;
	if (root->left)
		res = btree_search_item(root->left, data_ref, cmpf);
	if (!res && cmpf(root->item, data_ref) == 0)
		res = root->item;
	if (!res && root->right)
		res = btree_search_item(root->right, data_ref, cmpf);
	return (res);
}
