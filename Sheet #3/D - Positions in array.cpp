#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<size; i++)
    {
        if(arr[i] <= 10)
        {
            cout << "A[" << i << "] = " << arr[i] << "\n";
        }
    }
    return 0;
}