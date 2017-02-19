#include<iostream>
using namespace std;
class node
{
public:
  int data;
  node *left=NULL, *right=NULL;

};
class bst
{
public:
  node *head=NULL;
  void insert(node *ptr, int data)
  {
    if(head==NULL)
    {
      head=new node();
      head->data=data;
    }
    else
    {
      node *newNode=new node();
      newNode->data=data;

      if(data > ptr->data)
      {
        if(ptr->left==NULL)
          ptr->left=newNode;
        else
        insert(ptr->left, data);
      }
      else if(data < ptr->data)
      {
        if(ptr->right==NULL)
          ptr->right=newNode;
        else
          insert(ptr->right, data);
      }
    }
  }

  void printTree(node *ptr)
  {
    cout<<ptr->data<<" ";
    if(ptr->left!=NULL)
      printTree(ptr->left);
    if(ptr->right!=NULL)
      printTree(ptr->right);
  }
};
int main()
{
  bst b;
  b.insert(b.head,10);
  b.insert(b.head,23);
  b.insert(b.head,3);
  b.insert(b.head,56);
  b.printTree(b.head);
}
