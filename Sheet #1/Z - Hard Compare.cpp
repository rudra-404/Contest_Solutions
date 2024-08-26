#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, c;
    long long int b, d;
    cin >> a >> b >> c >> d;
    cout << ( (b*log(a) > d*log(c)) ? "YES" : "NO" );
    return 0;
}