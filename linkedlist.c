#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *next;
};

node *addNode(int data)
{
  struct node *temp=new node;
  temp->data=data;
  temp->next=NULL;
  return temp;
}

int decimalValue(node *head)
{
  int res=0;

  while(head!=NULL)
  {
    res=(res << 1)+head->data;
    cout<<head->data<<' ';
    head=head->next;
  }

  return res;
}

int main()
{
  struct node *head=addNode(1);
  head->next=addNode(0);
  head->next->next=addNode(1);
  head->next->next->next=addNode(1);

  cout<<"Decimal value is :" <<decimalValue(head);
  return 0;
}
