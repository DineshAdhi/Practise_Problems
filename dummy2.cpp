#include<iostream>
using namespace std;
int cnt=0;
void swap(char *a, char *b)
{
  char t = *a;
  *a = *b;
  *b = t;
}

void permute(string s, int l, int r)
{
    if(l==r)
      cout<<s<<" "<<++cnt<<"\n";
    else
    {
      for(int i=l; i<=r; i++)
      {
        swap(s[l], s[i]);
        permute(s, l+1, r);
      }
    }
}

int main()
{

  string s; cin>>s;

  permute(s,0,s.size()-1);
}
