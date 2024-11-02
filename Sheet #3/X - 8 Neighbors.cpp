#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int r, c, x, y;
    cin >> r >> c;
    char arr[r][c];
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cin >> arr[i][j];
        }
    }
    cin >> x >> y;
    x--;
    y--;
    if(arr[x-1][y-1] != '.' && arr[x-1][y] != '.' && arr[x-1][y+1] != '.' && arr[x][y-1] != '.' && arr[x][y+1] != '.' && arr[x+1][y-1] != '.' && arr[x+1][y] != '.' && arr[x+1][y+1] != '.') cout << "yes";
    else cout << "no";
    return 0;
}