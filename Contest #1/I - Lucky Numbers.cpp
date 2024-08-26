#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string num;
    cin >> num;
    int a = num[0] - 48;
    int b = num[1] - 48;
    if(a<b) swap(a,b);
    if(b==0) cout << "YES";
    else if(b!=0 && a%b==0) cout << "YES";
    else cout << "NO";
    return 0;
}