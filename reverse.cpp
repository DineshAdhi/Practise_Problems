#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--)
   {
    long long N,i;
    int *a,count=0;
    cin>>N;
    for(i=1;i<=N;i++)
        {
          if(i%10==0)
          {
            continue;
          }
        int sum=0,rem,flag;
        int temp=i;
        while(temp!=0)
            {
                rem=temp%10;
                sum=(sum*10)+rem;
                temp=temp/10;
        }
        sum=sum+i;
        temp=sum;
        while(sum!=0)
            {
              rem=sum%10;

          if(rem%2==1)
          {
            flag=1;
          }
          else
          {
            flag=0;
            break;
          }
            sum=sum/10;
        }

        if(flag==1)
        {
          count++;
        }

    }
    cout<<"\n";
    cout<<count;
    }
    return 0;
}
