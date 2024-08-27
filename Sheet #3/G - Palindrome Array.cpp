#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size], rev_arr[size];
    for(int i=0, j=(size-1); i<size; i++, j--)
    {
        cin >> arr[i];
        rev_arr[j] = arr[i];
    }
    bool isPalindrome = true;
    for(int i=0; i<size; i++)
    {
        if(arr[i] != rev_arr[i])
        {
            isPalindrome = false;
            break;
        }
    }
    cout << (isPalindrome ? "YES" : "NO");
    return 0;
}