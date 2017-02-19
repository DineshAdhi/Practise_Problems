#include<iostream>
#include<vector>
using namespace std;
vector<int> divisorArray(int n)
{
  vector<int> a;
  for(int i=2;i<=n;i++)
  {
    if(n%i==0)
    {
      a.push_back(i);
    }
  }

  if(a.empty())
    a.push_back(n);

  return a;
}

int findSumofDigits(int n){
  int sum=0,rem;
  while(n!=0)
  {
    rem=n%10;
    sum+=rem;
    n=n/10;
  }
  return sum;
}
int main()
{
  int n,max, maxposition;
  cin>>n;
  vector<int> arr= divisorArray(n);
  max=0;
  maxposition=0;
  for(int i=0;i<arr.size();i++)
  {
    int temp=findSumofDigits(arr[i]);
    if(temp > max){
      max=temp;
      maxposition=i;
    }
    else if(temp == max){
      if(arr[i] < arr[maxposition])
      {
        max=arr[i]; maxposition=i;
      }
    }
  }
  cout<<arr[maxposition];
}
