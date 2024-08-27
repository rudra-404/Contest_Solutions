#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size, min, position_of_min = 1;
    cin >> size;
    int arr[size];
    cin >> arr[0];
    min = arr[0];
    for(int i=1; i<size; i++)
    {
        cin >> arr[i];
        if(arr[i] < min)
        {
            min = arr[i];
            position_of_min = i+1;
        }
    }
    cout << min << " " << position_of_min;
    return 0;
}