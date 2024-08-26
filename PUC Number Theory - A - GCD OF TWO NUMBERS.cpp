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
    cout<<a<<"\n";
    return 0;
}