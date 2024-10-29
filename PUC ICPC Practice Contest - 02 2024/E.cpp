// Problem Link https://vjudge.net/contest/667573#problem/E

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int l, n;
        cin >> l >> n;
        int earliest = 0, latest = 0;
        for (int i = 0; i < n; i++) {
            int position;
            cin >> position;
            int min_time = min(position, l - position);
            int max_time = max(position, l - position);
            earliest = max(earliest, min_time);
            latest = max(latest, max_time);
        }
        cout << earliest << " " << latest << "\n";
    }
    return 0;
}