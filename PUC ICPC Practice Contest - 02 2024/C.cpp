// Problem Link https://vjudge.net/contest/667573#problem/C

#include <iostream>
using namespace std;
int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    if (a<1 || b<1 || c<1) {
        cout << "NO\n";
        return 0;
    }
    int min_problems_needed = 3;
    int total_problems = a+b+c;
    if (total_problems>=n && n>=min_problems_needed) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}