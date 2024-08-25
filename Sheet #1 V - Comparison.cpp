#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char comparison_op;
    bool isRight = false;
    cin >> a >> comparison_op >> b;
    switch(comparison_op)
    {
        case '>':
        if(a>b) isRight = true;
        break;

        case '<':
        if(a<b) isRight = true;
        break;

        case '=':
        if(a==b) isRight = true;
        break;
    }
    if(isRight) cout << "Right";
    else cout << "Wrong";
    return 0;
}