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
        if(arr[i] > 0) arr[i] = 1;
        else if(arr[i] < 0) arr[i] = 2;
    }
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}