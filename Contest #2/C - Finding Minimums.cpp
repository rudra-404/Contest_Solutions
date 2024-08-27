#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total_number, number_set, n, min, count = 0;
    cin >> total_number >> number_set;
    bool isFirstOfNumberSet = true;
    for(int i=1; i<=total_number; i++)
    {
        cin >> n;
        if(isFirstOfNumberSet)
        {
            min = n;
            isFirstOfNumberSet = false;
        }
        if(n < min)
        {
            min = n;
        }
        count++;
        if((count == number_set) || (i == total_number))
        {
            cout << min << " ";
            isFirstOfNumberSet = true;
            count = 0;
        }
    }
    return 0;
}