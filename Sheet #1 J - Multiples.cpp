#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if(a<b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if(a%b==0) cout << "Multiples";
    else cout << "No Multiples";
    return 0;
}