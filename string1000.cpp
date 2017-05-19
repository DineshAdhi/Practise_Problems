#include<iostream>
using namespace std;


char duplication(int x){
    string s = "0";
    while(s.size() < 1000)
    {
        string t = s;
        for(int i=0; i<s.size();i++)
            t[i] = (s[i] == '0')?'1':'0';
        s = s + t;
    }
    return s[x];
}

int main()
{
  cout<<duplication(7);
}
