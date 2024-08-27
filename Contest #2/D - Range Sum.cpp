#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    long long int  a, b;
    cin >> test;
    while(test--)
    {
        cin >> a >> b;
        if(a>b) swap(a,b);
        b = (b*(b+1))/2;
        a--;
        a = (a*(a+1))/2;
        cout << b-a << "\n";
    }
    return 0;
}