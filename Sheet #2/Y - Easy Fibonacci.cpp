#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int pre_previous = 0;
    if(n == 1)
    {
        cout << 0;
    }
    else
    {
        int present, previous = 1;
        cout << pre_previous << " " << previous << " ";
        for(int i=3; i<=n; i++)
        {
            present = pre_previous + previous;
            cout << present << " ";
            pre_previous = previous;
            previous = present;
        }
    }
    return 0;
}