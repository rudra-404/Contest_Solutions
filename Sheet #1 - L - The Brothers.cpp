#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);

    int i_of_a, i_of_b, title_char = 0, title_len;

    for(int i=0; i<a.length(); i++)
    {
        if(a[i] == ' ')
        {
            i_of_a = i+1;
            break;
        }
    }

    for(int i=0; i<b.length(); i++)
    {
        if(b[i] == ' ')
        {
            i_of_b = i+1;
            break;
        }
    }

    title_len = a.length() - i_of_a;

    for(; i_of_a<a.length(); i_of_a++,i_of_b++)
    {
        if(a[i_of_a] != b[i_of_b]) break;
        title_char++;
    }
    
    if(title_len == title_char) cout << "ARE Brothers";
    else cout << "NOT";
    
    return 0;
}