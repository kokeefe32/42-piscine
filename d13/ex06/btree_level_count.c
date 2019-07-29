/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:26:36 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/26 13:07:39 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	subtree_level_count(t_btree *root, int max)
{
	int max_l;
	int max_r;

	max_l = max;
	max_r = max;
	if (root)
	{
		max_l = subtree_level_count(root->left, max_l + 1);
		max_r = subtree_level_count(root->right, max_r + 1);
	}
	return (max_l > max_r ? max_l : max_r);
}

int	btree_level_count(t_btree *root)
{
	int l_level;
	int r_level;

	l_level = 0;
	r_level = 0;
	if (root)
	{
		l_level = subtree_level_count(root->left, l_level);
		r_level = subtree_level_count(root->right, r_level);
		return (l_level > r_level ? l_level : r_level);
	}
	return (0);
}
