#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, sum_of_reminder = 0, ans = 0;
        cin >> n;
        int temp = n;
        while(temp!=0)
        {
            sum_of_reminder += temp%2;
            temp /= 2;
        }
        for(int i=0; i<sum_of_reminder; i++)
        {
            ans += pow(2,i);
        }
        cout << ans << "\n";
    }
    return 0;
}