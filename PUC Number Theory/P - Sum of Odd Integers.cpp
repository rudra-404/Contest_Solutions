#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long n, k;
        cin >> n >> k;
        long long minSum = k*k;
        if (n >= minSum && (n%2 == k%2))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}