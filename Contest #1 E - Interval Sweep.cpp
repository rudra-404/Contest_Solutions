#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    bool no_interval = false;
    int a, b;
    cin >> a >> b;
    if(a<b) swap(a,b);
    if( (a==(b+1)) || (a==b && a!=0) ) no_interval = true;
    if(no_interval) cout << "YES";
    else cout << "NO";
    return 0;
}