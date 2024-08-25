#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day, year, month;
    cin >> day;
    year = day/365;
    day = day%365;
    month = day/30;
    day = day%30;
    cout << year << " years\n";
    cout << month << " months\n";
    cout << day << " days";
    return 0;
}