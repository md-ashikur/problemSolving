#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n), v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i] >> v[i];
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = max(ans, arr[i] * v[j] + v[i] * arr[j]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
