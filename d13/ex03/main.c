#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>
void	btree_apply_suffix(t_btree *root, void (*applyf)(void *));
t_btree *btree_create_node(void *item);

void	print_item(void *item)
{
	printf("%s\n", item);
}
int main()
{
	t_btree *root = btree_create_node("ROOT"); 
	root->left = btree_create_node("left");
	root->right = btree_create_node("right");

	btree_apply_suffix(root, &print_item);
}
