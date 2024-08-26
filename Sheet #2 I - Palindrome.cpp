#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; // 's' is for the main string
    cin >> s;
    if(s.length() == 1) cout << s << "\nYES";
    else
    {
        int c1 = 0, c2 = 0;
        for(int i = 0; i < s.length(); i++) // counting leading zero '0' in 's'
        {
            if(s[i] == '0') c1++;
            else break;
        }
        s.erase(0, c1); // removing leading zero '0' in 's'
        string r = s; // 'r' is for the reverse string
        reverse(r.begin(), r.end()); // 'r' is reversed
        for(int i = 0; i < s.length(); i++) // counting leading zero '0' in 'r'
        {
            if(r[i] == '0') c2++;
            else break;
        }
        r.erase(0, c2); // removing leading zero '0' in 's'
        cout << r << "\n";
        cout << ((s == r) ? "YES" : "NO");
    }
    return 0;
}