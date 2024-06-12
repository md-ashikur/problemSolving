#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if ( n == 1 && n == k )
        {
            cout << "YES" << endl;
            continue;
        }

        int res = (k * (k + 1)) / 2;
        res += k - 1;

        if (n >= res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}