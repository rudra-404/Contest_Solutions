#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, n, sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum = (n*(n+1)*((2*n)+1))/6;
        cout<<sum<<"\n";
    }
    return 0;
}