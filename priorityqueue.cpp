#include<iostream>
#include<vector>
using namespace std;

class priorityQueue
{
public:
  vector<int> a;

  void insert(int data)
  {
    a.push_back(data);
    int size = a.size()-1;
    while(a[size/2] < a[size])
    {
      a[size] = a[size/2];
      a[size/2] = data;
      size = size/2;
    }
  }

  int pop()
  {
    int insertData = a[a.size()-1];
    int returnData = a.front();
    int parent = 0;
    a.pop_back();
    while(parent * 2 < a.size())
    {
      int child = parent * 2;

      if(a[child] > a[child+1])
      {
        a[parent] = a[child];
        a[child] = insertData;
      }
      else
      {
        child = child + 1;
        a[parent] = a[child];
        a[child] = insertData;
      }
      parent = child;
    }

    return returnData;
  }

  void print()
  {
    for(int i=0;i<a.size();i++)
    {
      cout<<a[i]<<" ";
    }
  }
};

int main()
{
  priorityQueue q;
  int i;
  for(i=0;i<10;i++)
  {
    q.insert(i);
    q.print();
    cout<<"\n";
  }
  cout<<"\n\n";
  for(i=0;i<10;i++)
  {
    q.print(); q.pop();
    cout<<"\n";
  }
  q.print();
}
