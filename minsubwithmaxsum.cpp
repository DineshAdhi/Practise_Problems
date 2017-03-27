#include<iostream>
using namespace std;

int main()
{
  int n=5;
  //int arr[5] = {1,10,3,40,18};
  int arr[5] = {18,40,3,10,1};
  int x = 50;

  int min_len = n+1;
  int start=0, end = 0, currentSum=0;

  while(end < n)
  {
    while(currentSum < x && end <n)
      currentSum +=arr[end++];

    while(currentSum > x && start < n)
    {
      if(end - start < min_len)
         min_len  = end-start;

      currentSum -=arr[start++];
    }
  }

  cout<<min_len;
}
