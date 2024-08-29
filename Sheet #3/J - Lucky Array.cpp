#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    int min_element = INT_MAX;
    int count = 0;
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
        if (arr[i] < min_element)
        {
            min_element = arr[i];
            count = 1;
        }
        else if (arr[i] == min_element)
        {
            count++;
        }
    }
    cout << ((count%2 == 1) ? "Lucky" : "Unlucky");
    return 0;
}