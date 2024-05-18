#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    int diff = 0;
    if (a > b)
    {
        diff = a - b;
    }
    else
    {
        diff = b - a;
    }

    if(diff > k){
        cout<<"YES"<<endl;

    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}