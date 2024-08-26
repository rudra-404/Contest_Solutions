#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int eyes, mouths, bodies, maximum = 0;
    cin >> eyes >> mouths >> bodies;
    if(eyes!=0)
    {
        if(eyes >= min(mouths,bodies))
        {
            maximum = min(mouths,bodies);
            eyes = (eyes - min(mouths,bodies))/2;
            bodies = bodies - min(mouths,bodies);
            maximum = maximum + min(eyes,bodies);
        }
        else maximum = eyes;
    }
    cout << maximum;
    return 0;
}