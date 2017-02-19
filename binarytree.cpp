#include<iostream>
#include<stdio.h>
using namespace std;
class btree
{
public:
  int data=NULL;
  btree *left=NULL;
  btree *right=NULL;
  btree *parent=NULL;
};

void BSTrecurs(btree *head, btree *temp)
{
  if(temp->data < head->data)
  {
    if(head->left==NULL)
    {
      temp->parent=head;
      head->left=temp;
    }
    else
    {
      BSTrecurs(head->left,temp);
    }
  }
  else
  {
    if(head->right==NULL)
    {
      temp->parent=head;
      head->right=temp;
    }
    else
    {
      BSTrecurs(head->right,temp);
    }
  }
}
void insertElement(btree *head,int val)
{
  btree *temp=new btree;
  temp->data=val;
  temp->left=temp->right=NULL;

  if(head->data==NULL)
  {
    cout<<"HEad is null"<<"\n\n";
    head->data=val;
  }
  else
  {
    BSTrecurs(head,temp);
  }
}

void printTree(btree *head)
{
  if(head!=NULL)
  {
    cout<<head->data<<"\n";
    printTree(head->left);
    printTree(head->right);
  }
}

int countNode(btree *head)
{
  if(head==NULL)
    return 0;

  return 1+countNode(head->left)+countNode(head->right);
}

int main()
{
  btree b;
  btree *c;
  c=&b;
  int a[17]={40,13,7,37,34,39,28,38,30,29,32,57,49,67,63,60,65};
  for(int i=0;i<17;i++)
  {
    insertElement(c,a[i]);
  }
  insertElement(c,100);
  printTree(c);
  cout<<"\n\n";
  cout<<countNode(c);
}
