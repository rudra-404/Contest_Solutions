#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if(a<b) swap(a,b);
    while(b != 0)
    {
        swap(a,b);
        b = b%a;
    }
    cout << a;
    return 0;
}