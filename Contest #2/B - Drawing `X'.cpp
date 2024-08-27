#include <bits/stdc++.h>
using namespace std;
int main()
{
    int odd;
    cin >> odd;
    for(int row=1; row<=odd; row++)
    {
        for(int col=1; col<=odd; col++)
        {
            if((row == col) && (row == (odd-col)+1))
            {
                cout << "X";
            }
            else if(row == col)
            {
                cout << "\\";
            }
            else if(row == (odd-col)+1)
            {
                cout << "/";
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}