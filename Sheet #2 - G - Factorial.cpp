#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        unsigned long long int factorial = 1;
        cin >> n;
        while(n!=0)
        {
            factorial *= n;
            n--;
        }
        cout << factorial << "\n";
    }
    return 0;
}