#include<iostream>
#include<vector>
#include<string>
using namespace std;
class node
{
public:
  int data;
  node *left,*right;
  string str;
};
class priQueue
{
public:
  vector<node> a;

  void insert(string str, int data)
  {
    node newNode; newNode.data=data; newNode.str=str; newNode.left=newNode.right=NULL;
    a.push_back(newNode);

    int lastIndex= a.size()-1;

    while(data < a[lastIndex/2].data)
    {
      a[lastIndex] = a[lastIndex/2];
      a[lastIndex/2]=newNode;
      lastIndex/=2;
    }
  }

  void insert(node n)
  {
    a.push_back(n);

    int lastIndex= a.size()-1;

    while(n.data < a[lastIndex/2].data)
    {
      a[lastIndex] = a[lastIndex/2];
      a[lastIndex/2]=n;
      lastIndex/=2;
    }
  }

  node* pop()
  {
    int lastIndex = a.size()-1;
    node *returnNode = &a[0];
    node value = a[lastIndex];
    a.pop_back();

    int i=0;

    while(2*i < a.size())
    {
      int child = 2*i;

      if(value.data > a[child].data)
      {
        a[i] = a[child];
        a[child]=value;
      }
      else
      {
        child=child+1;
        a[i] = a[child];
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

node* huffman(priQueue q)
{
  node newNode;
  while(q.a.size() > 1)
  {
    newNode.left = q.pop();
    newNode.right=q.pop();
    newNode.data=newNode.left->data + newNode.right->data;
    newNode.str="$";
    q.insert(newNode);

  }

    return q.pop();
}

void traverse(node *s)
{
  cout<<s->data<<" ";

  if(s->left!=NULL)
    traverse(s->left);
  if(s->right!=NULL)
    traverse(s->right);
}

int main()
{
  priQueue q;
  q.insert("a",10);
  q.insert("b",200);
  q.insert("c",3);
  q.insert("d",1000);
}
