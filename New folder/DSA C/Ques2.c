#include <stdio.h>
#include <stdlib.h>

struct node 
{
  int item;
  struct node* left;
  struct node* right;
};


void inorderTraversal(struct node* root) 
{
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ->", root->item);
  inorderTraversal(root->right);
}

struct node* createNode(value) 
{
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

struct node* insertLeft(struct node* root, int value) 
{
  root->left = createNode(value);
  return root->left;
}
struct node* insertRight(struct node* root, int value) 
{
  root->right = createNode(value);
  return root->right;
}

int main() 
{
  struct node* root = createNode(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertLeft(root->left, 4);
  insertRight(root->right, 7);

  printf("Inorder traversal \n");
  inorderTraversal(root);
}
