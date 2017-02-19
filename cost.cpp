#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float cost,tip_percent,tax_percent;
    float tax,tip;
    float total_cost;
    int original_cost;
    cin>>cost;
    cin>>tip_percent;
    cin>>tax_percent;
    tax=(cost*tax_percent)/100;
    tip=(cost*tip_percent)/100;
    total_cost=cost+tax+tip;
    if( total_cost > (int(total_cost)+0.5))
    {
      original_cost=int(total_cost)+1;
    }
    else
    {
      original_cost=int(total_cost)-1;
    }
    cout<<total_cost;
    cout<<"The total meal cost is "<<original_cost<<" dollars.";

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
