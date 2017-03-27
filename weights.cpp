#include<iostream>
#include<map>
#include<math.h>
#include<vector>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a= *b;
  temp=*b;
}
int main()
{
  int i,j;
  int n; cin>>n;

  vector<int> key, weight;

  for(i=0;i<n;i++)
  {
    int a, score=0; cin>>a;

    int sqr = sqrt(a);

    if(sqr*sqr == a)
    {
      score = score + 5;
    }

    if(a%4==0 && a%6==0)
    {
      score = score + 4;
    }

    if(a%2==0)
    {
      score = score + 3;
    }

    key.push_back(a); weight.push_back(score);
  }

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(weight[j]> weight[i])
       {
         swap(key[j], key[i]); swap(weight[j], weight[i]);
       }
    }
  }

  for(i=0;i<n;i++)
    cout<<"("<<key[i]<<","<<weight[i]<<") ";

}
