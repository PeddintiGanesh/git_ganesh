// 14)BINARY SEARCH TREE(BST)

#include <stdio.h>
#include <stdlib.h>

// Node structure for the Binary Search Tree
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node with a given data value
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a value into the Binary Search Tree
struct Node *insert(struct Node *root, int value)
{
    // If the tree is empty, create a new node
    if (root == NULL)
    {
        return createNode(value);
    }

    // Otherwise, recursively insert into the left or right subtree
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }

    // Return the modified root
    return root;
}

// Function to perform an in-order traversal of the Binary Search Tree
void inOrderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Function to search for a value in the Binary Search Tree
struct Node *search(struct Node *root, int value)
{
    // If the tree is empty or the value is found, return the node
    if (root == NULL || root->data == value)
    {
        return root;
    }

    // Recursively search in the left or right subtree
    if (value < root->data)
    {
        return search(root->left, value);
    }
    else
    {
        return search(root->right, value);
    }
}

void main()
{
    struct Node *root = NULL;

    // Insert values into the Binary Search Tree
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Perform in-order traversal to display the sorted values
    printf("In-order traversal : ");
    inOrderTraversal(root);
    printf("\n");

    // Search for a value in the Binary Search Tree
    int searchValue = 40;
    struct Node *result = search(root, searchValue);
    if (result != NULL)
    {
        printf("%d found in the Binary Search Tree.\n", searchValue);
    }
    else
    {
        printf("%d not found in the Binary Search Tree.\n", searchValue);
    }
}