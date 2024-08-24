#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    bool puzzle = false;
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a+b-c == d) puzzle = true;
    else if(a-b+c == d) puzzle = true;
    else if(a+b*c == d) puzzle = true;
    else if(a*b+c == d) puzzle = true;
    else if(a-b*c == d) puzzle = true;
    else if(a*b-c == d) puzzle = true;
    if(puzzle) cout << "YES";
    else cout << "NO";
    return 0;
}