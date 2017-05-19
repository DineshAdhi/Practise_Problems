#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

void permutation(string s, int l, int n, vector<string> *a)
{
  int i;
  if(l==n)
  {
    a->push_back(s);
  }

  for(i=l;i<=n;i++)
  {
    swap(s[l], s[i]);
    permutation(s,l+1,n, a);
    swap(s[i], s[l]);
  }
}

int main()
{
  vector<string> a;
  int n,k; cin>>n>>k;
  int i,j;
  permutation(s, 0, s.size()-1, &a);
  for(i=0;i<a.size();i++)
  {
      // cout<<a[i]<<" ";
      int flag = 0;
      for(j=0;j<a[i].size();j++)
      {
        if(abs((int)a[i][j]-48-j-1)==k)
          flag = 1;
        else
        {
          flag = 0;
          break;
        }
      }

      cout<<"\n";
      if(flag == 1)
        cout<<a[i]<<"\n";
  }
}
