#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int test, diff, moves, a, b, c;
    cin >> test;
    while (test--)
    {
        cin >> a >> b >> c;
        diff = abs(a - b);
        moves = (diff + c - 1) / c;
        cout << (moves + 1) / 2 << endl;
    }
    return 0;
}