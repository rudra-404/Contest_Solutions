#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long G, L;
        cin >> G >> L;
        if(L%G == 0)
        {
            cout << G << " " << L << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}