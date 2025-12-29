#ifndef TREE_H
#define TREE_H

#include <stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// Function prototypes
TreeNode* create_node(int value);
TreeNode* insert(TreeNode* root, int value);
TreeNode* search(TreeNode* root, int key);
TreeNode* delete_node(TreeNode* root, int key);
void inorder(TreeNode* root);
void preorder(TreeNode* root);
void postorder(TreeNode* root);
void free_tree(TreeNode* root);

#endif
