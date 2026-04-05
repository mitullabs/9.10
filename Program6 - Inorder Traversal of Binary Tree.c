//Inorder Traversal of Binary Tree
#include <stdio.h>

//Node Structure
struct Node 
{
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(int x) 
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = x;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void inOrder(struct Node* node) 
{
    if (node == NULL)
        return;
        
    // Traverse the left subtree first
    inOrder(node->left);
    
    // Visit the current node
    printf("%d ", node->data);
    
    // Traverse the right subtree last
    inOrder(node->right);
}

int main() 
{
    // Create binary tree
    //       1
    //      /  \
    //    2     3
    //   / \     \
    //  4   5     6
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6);

    inOrder(root);
    printf("\n");

    return 0;
}
