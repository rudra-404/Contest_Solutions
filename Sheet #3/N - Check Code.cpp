#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    string str;
    cin >> a >> b;
    cin.ignore();
    getline(cin, str);
    if((str[a] != '-') || ((str.length() - (a+1)) != b)){
        cout << "No";
        return 0;
    }
    for(int i=0; i<str.length(); i++){
        if(i!=a && !isdigit(str[i])){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}