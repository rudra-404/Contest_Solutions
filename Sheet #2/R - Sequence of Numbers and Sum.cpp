#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, sum;
    while(cin >> a >> b)
    {
        if(a<=0 || b<=0) break;
        if(a>b) swap(a,b);
        sum=0;
        while(a<=b)
        {
            cout << a << " ";
            sum += a;
            a++;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}