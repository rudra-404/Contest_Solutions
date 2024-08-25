#include<bits/stdc++.h>
using namespace std;
int main()
{
    char X;
    cin >> X;
    if(X>=65 && X<=91) cout << (char)(X+32);
    else cout << (char)(X-32);
    return 0;
}