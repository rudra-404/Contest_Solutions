#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int sit_number, row, col;
    cin >> sit_number;
    row = sit_number/4;
    if(row%2==0)
    {
        col = sit_number%4;
    }
    else
    {
        col = 3 - (sit_number%4);
    }
    cout << row << " " << col;
    return 0;
}