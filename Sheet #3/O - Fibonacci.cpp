#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    long long n, fib;
    cin >> n;
    if(n==1) fib = 0;
    else if(n==2) fib = 1;
    else{
        long long a = 0, b = 1, temp;
        for (long long i = 3; i <= n; i++) {
            temp = a + b;
            a = b;
            b = temp;
        }
        fib = b;
    }
    cout << fib << "\n";
    return 0;
}