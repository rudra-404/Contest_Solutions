#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i=1;
    cin >> n;
    while(n--)
    {
        cout << i << " " << i+1 << " " << i+2 << " PUM\n";
        i += 4;
    }
    return 0;
}