// Problem Link https://vjudge.net/contest/667573#problem/M

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    set<int> distinct_mod_values;
    int number;
    for (int i=0; i<10; i++) {
        cin >> number;
        distinct_mod_values.insert(number % 42);
    }
    cout << distinct_mod_values.size() << "\n";
    return 0;
}