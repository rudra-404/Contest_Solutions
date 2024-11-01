#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int N, M;
    cin >> N >> M;
    vector<vector<int>> adj(N);
    for (int i=0; i<M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    } vector<vector<double>> matrix(N, vector<double>(N+1, 0.0));
    for (int i=0; i<N; i++) {
        if (i == N-1) {
            matrix[i][i] = 1.0;
            matrix[i][N] = 0.0;
        } else {
            matrix[i][i] = 1.0;
            int degree = adj[i].size();
            for (int neighbor : adj[i]) matrix[i][neighbor] -= 1.0 / degree;
            matrix[i][N] = 1.0;
        }
    } for (int i=0; i<N; i++) {
        int pivot = i;
        for (int j=i+1; j<N; j++) if (abs(matrix[j][i]) > abs(matrix[pivot][i])) pivot = j;
        swap(matrix[i], matrix[pivot]);
        double pivotValue = matrix[i][i];
        for (int j=i; j<=N; j++) matrix[i][j] /= pivotValue;
        for (int j=0; j<N; j++) {
            if (j != i) {
                double factor = matrix[j][i];
                for (int k=i; k<=N; k++) matrix[j][k] -= factor * matrix[i][k];
            }
        }
    } cout << fixed << setprecision(6) << matrix[0][N] << "\n";
    return 0;
}