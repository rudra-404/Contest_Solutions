#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int days = 0;
    int printers = 1;
    while(printers < n) {
        printers *= 2;
        days++;
    } days++;
    cout << days << "\n";
    return 0;
}