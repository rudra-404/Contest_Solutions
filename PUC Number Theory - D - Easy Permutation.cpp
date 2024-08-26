#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--)
    {
        int N;
        cin >> N;
        for (int i=N; i>=1; i--)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}