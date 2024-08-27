#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int total_number, n, sum=0;
    cin >> total_number;
    while(total_number--)
    {
        cin >> n;
        sum += n;
    }
    cout << abs(sum);
    return 0;
}