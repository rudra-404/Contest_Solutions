#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for(int i=2; i<=num; i++)
    {
        if(i==2 || i==3)
        {
            cout << i << " ";
            continue;
        }
        if(i%2==0) continue;
        else
        {
            bool isPrime = true;
            for(int j=3; (j*j)<=i; j+=2)
            {
                if(i%j==0)
                {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) cout << i << " ";
        }
    }
    return 0;
}