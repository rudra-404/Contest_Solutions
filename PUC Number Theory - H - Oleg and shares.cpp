#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> prices(n);
    for (int i=0; i<n; i++)
    {
        cin >> prices[i];
    }
    long long min_price = *min_element(prices.begin(), prices.end());
    long long total_moves = 0;
    for(int i=0; i<n; i++)
    {
        long long diff = prices[i] - min_price;
        if(diff%k != 0)
        {
            cout << -1 << "\n";
            return 0;
        }
        total_moves += diff / k;
    }
    cout << total_moves << "\n";
    return 0;
}