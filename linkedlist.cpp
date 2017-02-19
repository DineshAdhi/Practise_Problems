#include<iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};
int main()
{
  node *root;

  root=new node;
  root->data=0;
  root->next=0;

  cout<<root->data;
}
