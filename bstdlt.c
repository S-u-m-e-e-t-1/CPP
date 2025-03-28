#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *left, *right;
};

struct node *newNode (int value)
{
  struct node *temp = (struct node *) malloc (sizeof (struct node));
  temp->data = value;
  temp->left = temp->right = NULL;
  return temp;
}

void inorder (struct node *root)
{
  if (root != NULL)
    {
      inorder (root->left);
      printf ("%d ", root->data);
      inorder (root->right);
    }
}

struct node *deleteNode (struct node *root, int key)
{
  if (root == NULL)
    return root;

  if (key < root->data)
    {
      root->left = deleteNode (root->left, key);
    }
  else if (key > root->data)
    {
      root->right = deleteNode (root->right, key);
    }
  else
    {
      if (root->left == NULL)
	{
	  struct node *temp = root->right;
	  free (root);
	  return temp;
	}
      else if (root->right == NULL)
	{
	  struct node *temp = root->left;
	  free (root);
	  return temp;
	}
      struct node *temp = root->right;
      while (temp->left != NULL)
	{
	  temp = temp->left;
	}
      root->data = temp->data;
      root->right = deleteNode (root->right, temp->data);
    }
  return root;
}

int main ()
{
  struct node *root = newNode (110);
  root->left = newNode (50);
  root->right = newNode (40);
  root->left->left = newNode (70);
  root->left->right = newNode (140);
  root->right->left = newNode (150);
  root->right->right = newNode (180);
  printf ("Inorder  of the original tree: ");
  inorder (root);
  int key = 50;
  root = deleteNode (root, key);
  printf ("\nInorder  after deleting %d: ", key);
  inorder (root);

  return 0;
}