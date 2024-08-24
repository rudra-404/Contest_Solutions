#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n, k, a, value;
    double check;
    cin >> n >> k >> a;
    value = (n*k)/a;
    check = (n*k)/(float)a;
    if(value!=check && check>value) cout << "double";
    else if(value==check && value<=INT_MAX) cout << "int";
    else if(value>INT_MAX) cout << "long long";
    return 0;
}