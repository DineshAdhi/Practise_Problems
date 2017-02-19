#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  for(int i=1;i<100;i=i+2)
  {
    int sum=pow(i+1,2)-pow(i,2);
    cout<<sum<<" ";
  }
}
