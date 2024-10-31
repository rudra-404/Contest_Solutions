#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for(int i=0; i<N; i++) cin >> A[i];
    for(int i=0; i<M; i++) cin >> B[i];
    int j = 0;
    for(int i=0; i<N && j<M; i++) if(A[i]==B[j]) j++;
    if(j==M) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}