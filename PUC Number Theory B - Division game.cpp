#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a, b, temp;
    cin>>a>>b;
    if(a<b) swap(a,b);
    while(b!=0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    if(a>1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}