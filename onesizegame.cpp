#include<iostream>
#include<vector>
using namespace std;
int findMinIndex(vector<int> a)
{
  int i, minIndex=0, minValue=a[0];

  for(i=0;i<a.size();i++)
  {
    if(a[i] < minValue)
    {
       minIndex = i;
       minValue=a[i];
    }
  }
  return minIndex+1;
}
void print(vector<int> a )
{
  for(int i=0; i<a.size();i++)
    cout<<a[i]<<" ";

  cout<<"\n";
}
int main()
{
  int t; cin>>t;

  while(t--)
  {
    int i,n; cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++)
      cin>>a[i];

    while(1)
    {
      int minIndex = findMinIndex(a);

      for(i=0;i<a.size();i++)
      {
        a[i] = a[i] - minIndex;
      }

      print(a);

      vector<int> b;
      for(i=0;i<a.size();i++)
      {
        if(a[i] >= 0)
          b.push_back(a[i]);
      }

      a=b;

      if(a.size()==1)
      {
        cout<<"Ladia\n";
        break;
      }

      if(a.size()==0)
      {
        cout<<"Kushgara\n";
        break;
      }
    }
  }
}
