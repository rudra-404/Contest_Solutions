#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n, main_diagonal=0, secondary_diagonal=0;
    cin >> n;
    int arr[n][n];
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
            if(i==j) main_diagonal += arr[i][j];
            if(i==n-j-1) secondary_diagonal += arr[i][j];
        }
    }
    cout << abs(main_diagonal - secondary_diagonal);
    return 0;
}