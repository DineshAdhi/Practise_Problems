#include<iostream>
#include<vector>
using namespace std;
class heap
{
public:
  vector<int> a;

  void insert(int data)
  {
    a.push_back(data);
    int addIndex=a.size()-1;
    while(data<a[addIndex/2])
    {
      a[addIndex]=a[addIndex/2];
      a[addIndex/2]=data;
      addIndex/=2;
    }
  }

  void show()
  {
    for(int i=0;i<a.size();i++)
    {
      cout<<a[i]<<" ";
    }
  }

  int print()
  {
    return a.front();
  }

  void pop()
  {
    int i=0;
    int val=a[a.size()-1];
    a.pop_back();
    while(2*i < a.size())
    {
      int child=2*i;
      if(a[child] < a[child+1])
      {
        a[i]=a[child];
        a[child]=val;
      }
      else
      {
        child=child+1;
        a[i]=a[child];
        a[child]=val;
      }
          i=child;
    }
  }
};

int main()
{
  heap h;
  h.insert(9);
  h.insert(10);
  h.insert(5);
  h.insert(1);
  h.insert(0);
  h.insert(100);
  h.insert(-1);
  h.a.pop_back();
  h.show();
}
