#include<stdio.h> 
#include<stdlib.h>

struct node 
{ 
    int val; 
    struct node *left, *right; 
}; 
   
struct node* newNode(int item) 
{ 
    struct node* temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->val = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
   
void inorder(struct node* root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d \n", root->val); 
        inorder(root->right); 
    } 
} 
   
struct node* insert(struct node* node, int val) 
{ 
    if (node == NULL) return newNode(val); 
  
    if (val < node->val) 
        node->left  = insert(node->left, val); 
    else if (val > node->val) 
        node->right = insert(node->right, val);    
  
    return node; 
} 
   
int main() 
{ 
    
    struct node* root = NULL; 
    root = insert(root, 110); 
    insert(root, 50); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 140); 
    insert(root, 150); 
    insert(root, 180);
    
    inorder(root); 
   
    return 0; 
}