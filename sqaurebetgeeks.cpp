#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int min,max;
  cin >>min;
  cin >>max;
  for(int i=min;i<=max;i++)
  {
    int temp=i;
    int sqr=sqrt(i);
    int s=sqr/2;
    temp=temp-(s*s);
    int a=sqrt(temp);
    if(i==((s*s)+(a*a)))
    {
      cout<<s*s<<" "<<a*a<<" "<<i<<"\n";
    }
  }

}
