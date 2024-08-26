#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char op, equal;
    cin >> a >> op >> b >> equal >> c;
    switch(op)
    {
        case '+':
        if(a+b == c) cout << "Yes";
        else cout << a+b;
        break;

        case '-':
        if(a-b == c) cout << "Yes";
        else cout << a-b;
        break;

        case '*':
        if(a*b == c) cout << "Yes";
        else cout << a*b;
        break;
    }
    return 0;
}