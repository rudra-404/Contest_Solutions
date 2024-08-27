#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size, index_of_n = -1;
    cin >> size;
    long long int n, arr[size];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cin >> n;
    for(int i=0; i<size; i++)
    {
        if(arr[i] == n)
        {
            index_of_n = i;
            break;
        }
    }
    cout << index_of_n;
    return 0;
}