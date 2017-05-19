#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t; cin>>t;
    while(t--)
    {
        int x1,x2,y1,y2; cin>>x1>>y1>>x2>>y2;
        cout<<(x2 + abs(x1-x2))<<" "<<(y2 + abs(y1-y2))<<"\n";
    }
}
