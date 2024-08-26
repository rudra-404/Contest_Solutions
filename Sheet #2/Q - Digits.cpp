#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long int n;
        cin >> n;
        if(n==0) cout << 0;
        while(n!=0)
        {
            cout << n%10 << " ";
            n = n/10;
        }
        cout << "\n";
    }
    return 0;
}