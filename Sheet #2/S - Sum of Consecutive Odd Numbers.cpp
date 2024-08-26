#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test, a, b, sum;
    cin >> test;
    while(test--)
    {
        cin >> a >> b;
        if(a>b) swap(a,b);
        sum = 0;
        for(int i=a+1; i<b; i++)
        {
            if(i%2!=0)
            {
                sum += i;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}