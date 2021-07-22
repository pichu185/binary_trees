#include "binary_trees.h"

/**
 * recursive_delete - deletes node
 * @node: pointer to tree root
 */
void recursive_free(binary_tree_t *node)
{
	if (!node)
		return;
	recursive_free(node->left);
	recursive_free(node->right);
	free(node);
}
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (!tree)
		return;
	node = tree;
	recursive_free(node);
}
