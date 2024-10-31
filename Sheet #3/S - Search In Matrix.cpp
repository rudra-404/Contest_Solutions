#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int m, n, x;
    cin >> m >> n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    cin >> x;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == x){
                cout << "will not take number";
                return 0;
            }
        }
    }
    cout << "will take number";
    return 0;
}