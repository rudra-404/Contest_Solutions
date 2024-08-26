#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin >> num;
    int point_position;
    for(int i=0; i<num.length(); i++)
    {
        if(num[i]=='.')
        {
            point_position = i+1;
            break;
        }
    }
    bool isFloat = false;
    for(; point_position<num.length(); point_position++)
    {
        if(num[point_position] != '0')
        {
            isFloat = true;
            break;
        }
    }
    if(isFloat) cout << "float " << stoi(num) << " " << stod(num)-stoi(num);
    else cout << "int " << stoi(num);
    return 0;
}