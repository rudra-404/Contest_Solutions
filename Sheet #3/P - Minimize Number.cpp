#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, count = 0;
    cin >> n;
    long long arr[n];
    for(long long i=0; i<n; i++) cin >> arr[i];
    bool isDivisable = true;
    for(long long i=0; i<n; i++) {
        if(arr[i]%2 != 0) {
            isDivisable = false;
            break;
        }
    } while(isDivisable) {
        for(long long i=0; i<n; i++) {
            if(arr[i]%2 != 0) {
                isDivisable = false;
                break;
            }
            arr[i] /= 2;
            if(i == (n-1)) count++;
        }
    }
    cout << count;
    return 0;
}