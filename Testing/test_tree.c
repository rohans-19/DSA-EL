#include "tree/tree.h"
#include <stdio.h>
#include <assert.h>

int main() {
    printf("Testing Binary Search Tree...\n");
    TreeNode* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");
    
    assert(search(root, 40) != NULL);
    assert(search(root, 90) == NULL);
    
    root = delete_node(root, 20);
    printf("Inorder after deleting 20: ");
    inorder(root);
    printf("\n");
    
    free_tree(root);
    printf("BST tests passed!\n");
    return 0;
}
