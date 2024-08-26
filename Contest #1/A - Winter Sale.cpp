#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int disscount, final_price;
    cin >> disscount >> final_price;
    float initial_price = final_price/(1-(disscount/100.0));
    cout << fixed << setprecision(2) << initial_price;
    return 0;
}