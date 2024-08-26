#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while(b)
    {
        a%=b;
        swap(a, b);
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int N, X;
    cin >> N >> X;
    vector<int> cities(N);
    for (int i=0; i<N; i++)
    {
        cin >> cities[i];
    }
    int result = abs(X - cities[0]);
    for (int i=1; i<N; i++)
    {
        result = gcd(result, abs(X - cities[i]));
    }
    cout << result << "\n";
    return 0;
}