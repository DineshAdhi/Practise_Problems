#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i;
    vector<string> a, main;
    a.push_back("3"); a.push_back("4");
    main.push_back("3"); main.push_back("4");

    int n,count=0; cin>>n;

    while(true)
    {
      vector<string> b;
      for(i=0;i<a.size();i++)
      {
        b.push_back(a[i]+'3');
        b.push_back(a[i]+'4');
        main.push_back(a[i]+'3');
        main.push_back(a[i]+'4');
        count= count + 2;
      }
      a.swap(b);

      if(count > n)
        break;
    }

    for(i=0;i<main.size();i++)
      cout<<main[i]<<" ";

    cout<<"\n";

    cout<<main[n-1];
}
