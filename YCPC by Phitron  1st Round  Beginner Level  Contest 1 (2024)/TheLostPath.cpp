#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int diff = a % b;
    if ( b == 0)
        cout << -1 << endl;
    else
        cout << diff << endl;
    return 0;
}