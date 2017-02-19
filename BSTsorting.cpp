#include<iostream>
#include<vector>
using namespace std;
vector<int> a;
class node
{
public:
  int data; node *right, *left;
};
class BinarySearchTree
{
public:
  node *head = NULL;

  void insert(int data)
  {
    node *newNode= new node();
    newNode->data= data;
    newNode->right=newNode->left=NULL;

    if(head==NULL)
    {
      head=newNode;
    }
    else
    {
      insertRecursive(head, newNode);
    }
  }

  void insertRecursive(node *head, node *temp)
  {
    if(temp->data > head->data)
    {
      if(head->right==NULL)
      {
        head->right = temp;
      }
      else
      {
        insertRecursive(head->right, temp);
      }
    }
    else
    {
      if(head->left ==NULL)
      {
        head->left = temp;
      }
      else
      {
        insertRecursive(head->left, temp);
      }
    }
  }

  void printRecursive(node *head)
  {
    if(head->right != NULL)
      printRecursive(head->right);

      cout<<head->data<<" ";
      a.push_back(head->data);

    if(head->left !=NULL)
      printRecursive(head->left);
  }

  void print()
  {
    printRecursive(head);
  }



};
int main()
{
  BinarySearchTree b;
  vector<int> c;
  b.insert(10);
  b.insert(2);
  b.insert(20);
  b.insert(30);
  b.insert(1);
  b.print();

  cout<<"\n\n";

  for(int i=0; i<a.size(); i++)
    cout<<a[i]<<" ";
}
