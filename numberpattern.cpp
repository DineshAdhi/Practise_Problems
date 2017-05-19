#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int i;
  vector<string> a;
  a.push_back("3");
  a.push_back("4");

  vector<string> main;
  main.push_back("3");
  main.push_back("4");

  int k=6;

  while(k--)
  {
    vector<string> b;
    for(i=0;i<a.size();i++)
    {
      b.push_back(a[i]+'3');
      b.push_back(a[i]+'4');
      main.push_back(a[i]+'3');
      main.push_back(a[i]+'4');
    }
    a.swap(b);

    // main.insert(main.end(), b.begin(), b.end());

    for(i=0;i<b.size();i++)
      cout<<b[i]<<" ";

    cout<<"\n";
  }

  cout<<"\n";

  for(i=0;i<main.size();i++)
  {
    cout<<main[i]<<" ";
  }

  cout<<"\n\n"<<main[4-1];

}
