#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int T,count=0; cin>>T;
  while(T--)
  {
    string name;
    cin>>name;
    vector<char> st;
    for(int i=0;i<name.size();i++)
    {
      if(name[i]=='A')
      {
        if(!st.empty() && st.back()=='A')
        st.pop_back();
        else
        st.push_back('A');
      }
      else if(name[i]=='B')
      {
        if(!st.empty() && st.back()=='B')
          st.pop_back();
          else
          st.push_back('B');
      }
    }

    count+=st.empty();

  }

  cout<<count<<'\n';
  }
