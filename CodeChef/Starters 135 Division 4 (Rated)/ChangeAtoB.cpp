#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, k;
        cin >> a >> b >> k;
        int x = a, ans = 0;
    if (k > b)
    {
        cout << b - a << endl;
    }
    while (b != a)
    {

        if (b % 2 != 0)
        {

            b--;
        }
        else if (b / k >= x)
        {
            b = (b / k) + (b % k);
        }
        else
        {
            ans += b - a;
            break;
        }
    }
    cout << ans << endl;
    }

    return 0;
}
