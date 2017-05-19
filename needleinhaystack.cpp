#include<iostream>
using namespace std;

int check(string needle, string haystack, int i, int s)
{
  if(needle[s]=='\0')
    return 1;

  if(needle[s]==haystack[i])
    return check(needle, haystack, i+1, s+1);
  else
    return 0;
}

int main()
{
  int i,n; cin>>n;
  string needle; cin>>needle;
  string haystack; cin>>haystack;

  for(i=0; i<haystack.size(); i++)
  {
    if(needle[0]==haystack[i])
      if(check(needle, haystack, i, 0))
        cout<<i<<"\n";
  }
}
