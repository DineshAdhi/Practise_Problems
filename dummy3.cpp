#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    map<int, int> m;
    int n, max = -1; cin>>n;
    while(n--)
    {
        int s; cin>>s;
        if(s > max)
          max = s;

        m[s]++;
    }

    cout<<m[max]<<" ";



}
