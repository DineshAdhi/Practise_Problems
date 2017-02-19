#include<iostream>
#include<vector>
using namespace std;
class node
{
public:
  int data;
  node *left, *right;
};
class priQueue
{
public:
  vector<node> a;

  void insert(int data)
  {
    node n; n.data=data; n.left=n.right=NULL;

    a.push_back(n);
    int lastIndex= a.size()-1;

    while(data < a[lastIndex/2].data)
    {
      a[lastIndex]=a[lastIndex/2];
      a[lastIndex/2]=n;
      lastIndex/=2;
    }
  }

  void insert(node n)
  {
    a.push_back(n);
    int lastIndex=a.size()-1;

    while(n.data < a[lastIndex/2].data)
    {
      a[lastIndex]=a[lastIndex/2];
      a[lastIndex/2]=n;
      lastIndex/=2;
    }

  }

  node* pop()
  {
      node *returnNode = &a[0];
      int lastIndex = a.size()-1;
      node value = a[lastIndex];

      a.pop_back();

      int i=0;

      while(2*i < a.size())
      {
        int child = 2*i;

        if(value.data > a[child].data)
        {
          a[i]=a[child];
          a[child]=value;
        }
        else
        {
          child = child+1;
          a[i]=a[child];
          a[child]=value;
        }

        i=child;
      }

      return returnNode;
  }

  void print()
  {
    for(int i=0;i<a.size();i++)
      cout<<a[i].data<<" ";
  }
};

node buildHuffmanTree(priQueue q)
{
  while(q.a.size()!=1)
  {

    node newNode;
    newNode.left=q.pop();
    newNode.right=q.pop();
    newNode.data = newNode.left->data + newNode.right->data;
    newNode.str="$";
    q.insert(newNode);
  }

  node returnNode = q.a[0];

  return returnNode;
}

void traverse(node *head)
{
  cout<<head->str<<" ";
  if(head->left!=NULL)
    traverse(head->left);
  if(head->right!=NULL)
    traverse(head->right);
}

int main()
{
  priQueue q;
  q.insert(10);
  q.insert(200);
  q.insert(3);
  q.insert(1000);
  node n = buildHuffmanTree(q);
  traverse(n);
}
