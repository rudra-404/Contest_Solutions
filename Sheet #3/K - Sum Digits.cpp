#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total_digit, sum = 0;
    string number;
    cin >> total_digit >> number;
    for(int i=0; i<total_digit; i++)
    {
        sum += (number[i]-48);
    }
    cout << sum;
    return 0;
}