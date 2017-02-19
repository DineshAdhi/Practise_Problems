#include<iostream>
using namespace std;
class node
{
public:
  int data;
  node *left, *right;
};
class btree
{
public:
  node *head =NULL;

  void insert(int data)
  {
    node *temp= new node();
    temp->data = data;

    if(head==NULL)
      head = temp;
    else
      insertRecurs(head , temp);
  }

  void insertRecurs(node *head, node *root)
  {
    if(root->data < head->data)
    {
      if(head->left == NULL)
        head->left = root;
      else
        insertRecurs(head->left, root);
    }
    else
    {
      if(head->right == NULL)
        head->right = root;
      else
        insertRecurs(head->right, root);
    }
  }

  void inorderRecurs(node *root)
  {
    if(root==NULL)
      return;

    inorderRecurs(root->left);
    cout<<root->data<<" ";
    inorderRecurs(root->right);
  }

  void inorder()
  {
    inorderRecurs(head);
  }
};

btree* mirror(btree *root)
{
    return mirrorRecurs(root->head)
}

btree* mirrorRecurs(node *root)
{
  node *temp=new node();
  if(root)
  {
    mirrorRecurs(root->left);
    mirrorRecurs(root->right);

  temp = root->right;
  root->right = root->left;
  root->left =temp;
  }

  return root;
}

int main()
{
  btree b;
  b.insert(1);
  b.insert(19);
  b.insert(4);

  btree mirTree = mirror(&b);

  mirTree.inorder();

}
