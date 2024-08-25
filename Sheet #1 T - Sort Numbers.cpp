#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(a,min(b,c)) << "\n";
    cout << (a+b+c)-( min(a,min(b,c)) + max(a, max(b,c)) );
    cout << "\n" << max(a, max(b,c)) << "\n\n";
    cout << a << "\n" << b << "\n" << c;
    return 0;
}