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

        new = malloc(sizeof(binary_tree_t));
        if (!new)
        {
                return (NULL);
        }
        new->parent = parent;
        new->right = NULL;
        new->left = NULL;
        new->n = value;
        return (new);
}
