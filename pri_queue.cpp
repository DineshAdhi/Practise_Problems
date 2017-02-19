#include<iostream>
#include<vector>
using namespace std;
class node
{
public:
  int data; string str; node *left, *right;
};

class priQueue
{
public:
  vector<node*> a;

  void insert(int data , string str)
  {
    node *n = new node();
    n->data = data; n->str = str; n->left = n->right = NULL;

    a.push_back(n);
    int lastIndex = a.size()-1;

    while(a[lastIndex]->data < a[lastIndex/2]->data)
    {
      a[lastIndex] = a[lastIndex/2];
      a[lastIndex/2] = n;
      lastIndex = lastIndex/2;
    }
  }

  node* pop()
  {
    node *insertNode = a[a.size() - 1];
    node *returnNode = a.front();
    int i=0;

    a.pop_back();

    while(2*i < a.size())
    {
      int child = 2*i;

      if(a[child]->data < a[child+1]->data)
      {
        a[i] = a[child];
        a[child] = insertNode;
      }
      else
      {
        child = child+1;
        a[i] = a[child];
        a[child]=insertNode;
      }
      i=child;
    }

    return returnNode;
  }
  void print()
  {
    for(int i=0; i<a.size(); i++)
      cout<<a[i]->data<<" ";
  }
};

int main()
{
  int i;
  priQueue q;
  for(i=0;i<10;i++)
  {
    q.insert(i, "D");
  }
  for(i=0;i<9;i++)
  {
    q.superPop(); q.print(); cout<<"\n";
  }
}
