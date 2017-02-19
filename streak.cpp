#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
string NumberToString ( int Number )
{
   ostringstream ss;
   ss << Number;
   return ss.str();
}
int main()
{
  int n;
  cin>>n;
    vector<int> a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  string s=NumberToString(n);
  for(int i=0;i<n;i++)
  {
    if((a[i]%21)==0)
    {
      cout<<"The streak is broken!\n";
    }
    else
    {
      string s=NumberToString(a[i]);
      if(!(s.find(21) && s.find(12)))
      {
          cout<<"The streak is broken!\n";
      }
      else
      {
        cout<<"The streak lives still in our heart!\n";
      }
    }
}
}
