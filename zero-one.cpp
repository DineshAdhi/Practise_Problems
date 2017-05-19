#include<iostream>
#include<vector>
using namespace std;

void remove(int *a, int l, int *n)
{
  int i;
  for(i=l;i<(*n-1);i++)
  {
    a[i] = a[i+1];
  }
  *n = *n - 1;
}

int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n,i,j; cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int win = 0;

    while(n > 0)
    {
        int flag = 1;
        for(i=1;i<n-1;i++)
        {
          if(a[i-1]==0 && a[i+1]==0)
          {
            flag = 0;
            remove(a,i,&n);
            win = !win;
          }
        }

        if(flag)
          break;
    }

    if(win==0)
      cout<<"Bob\n";
    else
      cout<<"Alice\n";
  }
}
