#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size;
        cin >> size;
        int arr[size];
        for(int i=0; i<size; i++)
        {
            cin >> arr[i];
        }
        int minimum = INT_MAX;
        for(int i=0; i<size; i++)
        {
            for(int j=(i+1); j<size; j++)
            {
                minimum = min(minimum, arr[i]+arr[j]+j-i);
            }
        }
        cout << minimum << "\n";
    }
    return 0;
}