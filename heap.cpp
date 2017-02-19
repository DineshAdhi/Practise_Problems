#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class heap
{
public:
  vector<int> a;

  void insert(int n)
  {
    a.push_back(n);

    int addIndex=a.size();
    addIndex=addIndex-1;
    while(n > a[addIndex/2])
    {
      a[addIndex]=a[addIndex/2];
      a[addIndex/2]=n;
      addIndex/=2;
    }
  }

  void pop()
  {
    int i=0,val,index;
    index=a.size()-1;
    val=a[index];
    a.pop_back();

    while(2*i <a.size())
    {
      int child=2*i;
      if(a[child] > a[child+1])
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

  void print()
  {
    for(int i=0; i<a.size();i++)
    {
      cout<<a[i]<<" ";
    }
  }
};
int main()
{
  int i;
  heap q;
  for(i=0; i<10;i++)
  {
    q.insert(i);
  }
  for(int i=0;i<9;i++)
  {
    q.pop();
    q.print();
    cout<<"\n";
  }
}
