#include "binary_trees.h"

/**
 * binary_tree_node - Entry point
 * @parent: is a pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
 binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
 {
	binary_tree_t *new = NULL;

	nuevo = malloc(sizeof(binary_tree_t));
	if (!new)
	{
		return (NULL);
	}
	new->parent = padre;
	new->left = NULL;
	new->right = NULL;
	new->n = val;
	return (nuevo);
 }
 