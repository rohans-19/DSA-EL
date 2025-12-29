#include "tree.h"

TreeNode* create_node(int value) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    if (newNode) {
        newNode->data = value;
        newNode->left = newNode->right = NULL;
    }
    return newNode;
}
