
#include <iostream>
using namespace std;


int main() {
    int cost,tip_percent,tax_percent;
    int tax,tip,total_cost;
    cin>>cost;
    cin>>tip_percent;
    cin>>tax_percent;
    tax=(cost*tax_percent)/100;
    tip=(cost*tip_percent)/100;
    total_cost=cost+tax+tip;
    cout<<total_cost;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
