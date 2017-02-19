#include<iostream>
using namespace std;
class node
{
public:
  int data;
  node *left=NULL, *right=NULL;
};
class tree
{
public:
  node *head=NULL;

  void insertRecurs(node *root, node *insNode)
  {
      if(insNode->data > root->data)
      {
        if(root->left==NULL)
        {
          root->left=insNode;
        }
        else
          insertRecurs(root->left, insNode);
      }
      else
      {
        if(root->right==NULL)
          root->right=insNode;
        else
        insertRecurs(root->right, insNode);
      }

    head=root;
  }

  void insert(int data)
  {
    node *newNode= new node();
    newNode->data=data;

    if(head==NULL)
    {
      head=newNode;
    }
    else
    insertRecurs(head, newNode);
  }

  void prrintRecurs(node *root)
  {
    cout<<root->data<<" ";
    if(root->left!=NULL)
      prrintRecurs(root->left);
    if(root->right!=NULL)
      prrintRecurs(root->right);
  }

  void print()
  {
    prrintRecurs(head);
  }

  int max(int a, int b)
  {
    if(a>b) return a;
    else return b;
  }

  int findHeightRecurs(node *root)
  {
    if(root==NULL)
      return 0;
    else
    {
      return 1 + max(findHeightRecurs(root->left), findHeightRecurs(root->right));
    }
  }

  int findHeight()
  {
    return findHeightRecurs(head);
  }
};
int main()
{
  tree t;
  int n,a; cin>>n;
  while(n--)
  {
    cin>>a; t.insert(a);
  }
  int x,y; cin>>x>>y;
  cout<<max(x,y);
}
