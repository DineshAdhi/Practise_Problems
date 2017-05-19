#include <iostream>
#include<map>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, m, i; cin>>n>>m;
        map<int,int> ma;
        int max = 0;
        for(i=0;i<n;i++)
        {
            string s; cin>>s;
            int size = s.size();
            ma[size]++;

            if(max < size)
                max = size;
        }

        int flag = 1;
        for(i=1;i<=100;i++)
        {
          if(ma[i] > 0)
          {
            cout<<i<<" "<<ma[i]<<"\n";
            if(ma[i] == m)
              continue;
            else
            {
              flag = 0; break;
            }
          }
        }

        if(flag)
            cout<<"Possible\n";
        else
            cout<<"Not possible\n";
    }
}
