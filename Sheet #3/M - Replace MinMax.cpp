#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n];
    cin >> a[0];
    int max_index = 0;
    int min_index = 0;
    for(int i=1; i<n; i++){
        cin >> a[i];
        if(a[i] > a[max_index]) max_index = i;
        if(a[i] < a[min_index]) min_index = i;
    }
    swap(a[max_index],a[min_index]);
    for(int i=0; i<n; i++) cout << a[i] << " ";
    return 0;
}