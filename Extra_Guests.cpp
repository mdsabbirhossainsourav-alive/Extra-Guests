#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int x,y;
    cin >> x >> y;
    int total_cost = x*100;
    if(y > x)
    {
        total_cost = total_cost + (y-x)*150;
    }
    cout << total_cost << endl;
    return 0;
}