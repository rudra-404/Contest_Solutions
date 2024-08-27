#include <bits/stdc++.h>
using namespace std;
int main()
{
    int timon, pumbaa;
    cin >> timon >> pumbaa;
    if(timon<=pumbaa)
    {
        cout << 0;
    }
    else
    {
        cout << timon - pumbaa;
    }
    return 0;
}