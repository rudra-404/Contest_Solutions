#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int X, N;
    cin >> X >> N;
    int total_available = X * N;
    int used_MB = 0;
    for (int i=0; i<N; i++) {
        int P;
        cin >> P;
        used_MB += P;
    }
    int remaining_MB = total_available - used_MB + X;
    cout << remaining_MB;
    return 0;
}