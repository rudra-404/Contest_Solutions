#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test, max = 0;
    cin >> test;
    while(test--)
    {
        long long int n, count = 0;
        cin >> n;
        while(n%2==0)
        {
            count++;
            n = n/2;
        }
        if(count > max)
        {
            max = count;
        }
    }
    cout << max;
    return 0;
}