#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, size, maximum;
    cin >> test;
    while(test--)
    {
        cin >> size;
        int arr[size];
        for(int i=0; i<size; i++) cin >> arr[i];
        for(int i=0; i<size; i++)
        {
            cout << arr[i] << " ";
            maximum = arr[i];
            for(int j=(i+1); j<size; j++)
            {
                maximum = max(maximum, arr[j]);
                cout << maximum << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}