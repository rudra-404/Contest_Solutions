#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total, n, even = 0, odd = 0, positive = 0, negative = 0;
    cin >> total;
    while(total--)
    {
        cin >> n;
        if(n>0) positive++;
        if(n<0) negative++;
        if(n%2==0) even++;
        else odd++;
    }
    cout << "Even: " << even;
    cout << "\nOdd: " << odd;
    cout << "\nPositive: " << positive;
    cout << "\nNegative: " << negative;
    return 0;
}