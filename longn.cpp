#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
    int val = 16;

    for(val=2; val<16; val++)
    {
      vector<bool> a;
      int res=0, x=3;

      for(int i=0; i<=log2(val); i++)
      {
        bool s = (val & (1<<i))!=0;
        a.push_back(s);
      }

      for(int k=a.size()-1; k>=0; k--)
      {
        cout<<a[k];
      }

          cout<<"\n";

      for(int j=a.size()-1; j>=0; j--)
      {
        if(a[j]==1)
        {
          res++;
          if(res==x)
          {
            cout<<"Satisfied";
            break;
          }
        }
        else
        {
          res=0;
        }
      }

      cout<<"\n\n";
    }



}
