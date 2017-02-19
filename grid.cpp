#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int ans=0;
  vector<int> a;
  for(int i=0;i<n;i++)
  {
    int x,tp;
    cin>>x;
    cin>>tp;
    if(tp==0)
    {
      ans=ans+x;
    }
    else
    {
      a.push_back(x);
    }
  }

  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());

  for (int i = 0; i < min((int)a.size(), k); i++) {
       ans += a[i];
   }
   for (int i = k; i < a.size(); i++) {
       ans -= a[i];
   }
   cout << ans << endl;
   return 0;
}
