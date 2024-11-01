#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> freq(m + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 1; i <= m; i++) {
        cout << freq[i] << "\n";
    }

    return 0;
}