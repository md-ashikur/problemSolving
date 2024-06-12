#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a;

        if (a == 2)
        {
            b = 4;
            c = 8;
        }
        else
        {
            b = 2 * a;
            c = a * a;
        }
        cout << b << " " << c << endl;
    }

    return 0;
}
