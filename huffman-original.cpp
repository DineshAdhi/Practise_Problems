#include<iostream>
#include<vector>
#include<string>
using namespace std;
string code;
class node
{
public:
  int data;
  node *left, *right;
  string str;
};
class priQueue
{
public:
  vector<node*> a;
  string code;

  void insert(string str, int data)
  {
    node *n = new node();
    n->data=data; n->str=str;
    n->left=n->right=NULL;

    a.push_back(n);
    int lastIndex = a.size()-1;

    while(data < a[lastIndex/2]->data)
    {
      a[lastIndex] = a[lastIndex/2];
      a[lastIndex/2] = n;
      lastIndex/=2;
    }
  }

  node* pop()
  {
    int lastIndex = a.size()-1;
    node *newNode = a[lastIndex];
    node *returnNode = a.front();

    a.pop_back();
    int i=0;

    while(2*i < a.size())
    {
      int child = 2*i;

      if(newNode->data > a[child]->data)
      {
        a[i]=a[child];
        a[child]=newNode;
      }
      else
      {
        child=child+1;
        a[i]=a[child];
        a[child]=newNode;
      }
      i=child;
    }

    return returnNode;
  }

  void insert(node *n)
  {
    a.push_back(n);
    int lastIndex = a.size()-1;

    while(n->data < a[lastIndex/2]->data)
    {
      a[lastIndex]=a[lastIndex/2];
      a[lastIndex/2]=n;
      lastIndex/=2;
    }
  }

  void print()
  {
    for(int i=0; i<a.size(); i++)
      cout<<a[i]->data<<" ";
  }

  int size()
  {
    return a.size();
  }
};

node* huffman(priQueue a)
{
    while(a.size()!=1)
    {
      node *n= new node();
      n->right = a.pop();
      n->left= a.pop();
      n->data = n->left->data + n->right->data;
      n->str= "$";
      a.insert(n);
    }

    return a.pop();
}

void traverse(node *head)
{
  cout<<head->str<<" ";
  if(head->left!=NULL)
    traverse(head->left);
  if(head->right!=NULL)
    traverse(head->right);
}

int isLeaf(node *head)
{
  return ( !(head->right) && !(head->left) );
}

void printCodes(node *head, int *arr, int top)
{
    if(head->left)
    {
      arr[top]=0;
      printCodes(head->left, arr, top+1);
    }

    if(head->right)
    {
      arr[top]=1;
      printCodes(head->right, arr, top+1);
    }

    if(isLeaf(head))
    {
      cout<<head->str<<" ";

      for(int i=0; i<top;i++)
        cout<<arr[i];

      cout<<"\n";
    }
}

int main()
{
  int i;
  priQueue q;







  //q.insert("A",10);
  //q.insert("B", 200);
  //q.insert("C",12);
  //q.insert("D",1000);
  //q.insert("E",1);
  //node *huff = huffman(q);
  //int arr[6];
  //printCodes(huff, arr, 0);
}
