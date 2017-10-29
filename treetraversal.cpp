#include<iostream>

using namespace std;

struct node
{ int data;
  struct node *left,*right;
};

struct node *createnode(int);
void printpreorder(struct node*);
void printinorder(struct node*);
void printpostorder(struct node*);

int main(void)
{
 struct node *root=createnode(1);
 root->left=createnode(2);
 root->right=createnode(3);
 root->left->left=createnode(4);
 root->left->right=createnode(5);
  
 cout<<"\n Pre-order: ";
 printpreorder(root);
 cout<<"\n In-order: ";
 printinorder(root);
 cout<<"\n Post-order: ";
 printpostorder(root);
 cout<<"\n";
 return 0;
}

struct node *createnode(int data)
{ struct node* node = new(struct node);
  node->data=data;
  node->left=NULL;
  node->right=NULL;
} 

void printpreorder(struct node *node)
{ 
  if(node==NULL)
   return;
  cout<<node->data<<"  ";
  printpreorder(node->left);
  printpreorder(node->right);
} 


void printinorder(struct node *node)
{ 
  if(node==NULL)
   return;
  printinorder(node->left);
  cout<<node->data<<"  ";
  printinorder(node->right);
} 

void printpostorder(struct node *node)
{ if(node==NULL)
   return;
  printpostorder(node->left);
  printpostorder(node->right);
  cout<<node->data<<"  ";
} 


