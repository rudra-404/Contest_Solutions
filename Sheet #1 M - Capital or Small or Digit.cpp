#include<bits/stdc++.h>
using namespace std;
int main()
{
    char X;
    cin >> X;
    if(X>=48 && X<=58) cout << "IS DIGIT";
    else if(X>=65 && X<=91) cout << "ALPHA\nIS CAPITAL";
    else if(X>=97 && X<=123) cout << "ALPHA\nIS SMALL";
    return 0;
}