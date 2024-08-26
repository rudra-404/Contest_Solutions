#include <bits/stdc++.h>
using namespace std;
int main()
{
    char symbol;
    int total_number;
    cin >> symbol >> total_number;
    int arr[total_number];
    for(int i=0; i<total_number; i++) cin >> arr[i];
    for(int i=0; i<total_number; i++)
    {
        for(int j=1; j<=arr[i]; j++)
        {
            cout << symbol;
        }
        cout << "\n";
    }
    return 0;
}