// Problem Link https://vjudge.net/contest/667573#problem/A

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = n % 10;
    n /= 10;
    int b = n % 10;
    n /= 10;
    int c = n % 10;
    int d = n / 10;
    if ((a==b && b==c) || (b==c && c==d) || (a==b && b==c && c==d)) cout << "Yes";
    else cout << "No";
    return 0;
}