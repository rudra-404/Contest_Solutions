#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long n, s;
        cin >> n >> s;
        long long sum_n = (n*(n+1))/2;
        if (s > sum_n)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> result;
            for (int i=n; i>0; i--)
            {
                if (s >= i)
                {
                    result.push_back(i);
                    s -= i;
                }
            }
            for (int i=0; i<result.size(); i++)
            {
                cout << result[i] << (i == result.size() - 1 ? "\n" : " ");
            }
        }
    }
    return 0;
}