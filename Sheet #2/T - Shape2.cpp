#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int row=1; row<=n; row++)
    {
        for(int space=1; space<=(n-row); space++)
        {
            cout << " ";
        }
        for(int star=1; star<=((2*row)-1); star++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}