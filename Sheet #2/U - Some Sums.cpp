#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    for(int i=1; i<=n; i++)
    {
        int digit_sum = 0, temp = i;
        while(temp!=0)
        {
            digit_sum += temp%10;
            temp /= 10;
        }
        if(digit_sum>=a && digit_sum<=b)
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}