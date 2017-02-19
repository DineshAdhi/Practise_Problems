#include<iostream>
#include<string>
using namespace std;
class hashTable
{
public:
  int *array;
  hashTable()
  {
    array=new int[26];
    for(int i=0;i<26;i++)
      array[i]=0;
  }
  void insert(char key)
  {
    int haskKey=(int)key;
    haskKey-=97;
    array[haskKey]+=1;
  }

  int remove(char key)
  {
    int haskKey=(int)key - 97;
    if(array[haskKey]!=0)
    {
      array[haskKey]-=1;
      return 0;
    }
    else
      return 1;
  }

  int getExtraElements()
  {
    int r=0;
    for(int i=0;i<=26;i++)
    {
      if(array[i]!=0)
      r++;
    }
    return r;
  }

  int get(char key)
  {
    int haskKey=(int)key - 97;
    return array[haskKey];
  }
};
int main()
{
  hashTable h; int i,res=0;
  string a,b;
  cin>>a>>b;
  for(i=0;i<=a.length();i++)
    h.insert(a[i]);
  for(i=0;i<=b.length();i++)
  {
    if(h.remove(b[i]))
    {
      res++;
    }
  }
  res=res+h.getExtraElements();
  cout<<res;
}
