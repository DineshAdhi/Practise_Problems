#include<iostream>
#include<vector>
using namespace std;
void swap_array(vector<int> a)
{
  vector<int> binaryArray(a.size());
  for(int i=0;i<a.size();i++)
  {
    int temp=a[i];
    int sum=0;
    while(temp!=0)
    {
      if(temp%2==1)
      {
        sum++;
      }
    temp=temp/2;
    }
    cout<<sum<<"\n";
  }

/*  for(int j=0;j<binaryArray.size();j++)
  {
    for(int s=j+1;s<binaryArray.size();s++)
    {
      if(binaryArray[j]<binaryArray[s])
      {
        int sample=a[j];
        a[j]=a[s];
        a[s]=sample;
      }
    }
  }

  for(int z=0;z<a.size();z++)
  {
    cout<<a[z]<<"\n";
  }*/
}
int main()
{
  int _a_size = 0;
     cin >> _a_size;
     vector<int> _a;
     int _a_item;
     for(int _a_i=0; _a_i<_a_size; _a_i++) {
         cin >> _a_item;
         _a.push_back(_a_item);
     }

     swap_array(_a);

     return 0;
}
