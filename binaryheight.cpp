#include<iostream>
using namespace std;

class node
{
public:
  int data,order,height;
  node *left, *right;
};

class binarytree
{
public:
  node *head;
  binarytree()
  {
    head = NULL;
  }

  void insertRecurs(node *head, node *temp)
  {
    if(temp->data < head->data)
    {
      if(head->left==NULL)
        head->left = temp;
      else
        insertRecurs(head->left, temp);
    }
    else
    {
      if(head->right == NULL)
        head->right = temp;
      else
        insertRecurs(head->right, temp);
    }
  }

  void insert(int data)
  {
    node *temp = new node();
    temp->data = data; temp->left=temp->right=NULL;

    if(head==NULL)
      head = temp;
    else
      insertRecurs(head, temp);
  }

  void printRecurs(node *temp)
  {
    if(temp==NULL)
      return;

    cout<<temp->data<<"("<<temp->order<<")("<<temp->height<<") ";
    printRecurs(temp->left);
    printRecurs(temp->right);
  }

  void print()
  {
    node *temp = head;
    printRecurs(temp);
  }

  void findHeightRecurs(node *temp, int height)
  {
    if(temp==NULL)
      return;

    temp->height = height;
    findHeightRecurs(temp->left, height+1);
    findHeightRecurs(temp->right, height+1);
  }

  void findHeight()
  {
    node *temp = head;
    findHeightRecurs(temp,0);
  }

  int findOrderRecurs(node *temp)
  {
    if(temp == NULL)
      return 0;

    temp->order = 1 + max(findOrderRecurs(temp->left), findOrderRecurs(temp->right));
    return 0;
  }

  void findOrder()
  {
    node *temp = head;
    findOrderRecurs(temp);
  }
};

int main()
{
  binarytree b;
  b.insert(19);
  b.insert(1);
  b.insert(23);
  b.insert(25);
  b.findOrder();
  b.findHeight();
  b.print();
}
