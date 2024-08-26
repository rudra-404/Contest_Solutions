#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, present, max = 0;
    cin >> n;
    while(n--)
    {
        cin >> present;
        if(present > max) max = present;
    }
    cout << max;
    return 0;
}