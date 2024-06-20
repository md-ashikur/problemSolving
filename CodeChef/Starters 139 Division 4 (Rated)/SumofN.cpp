#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll M = 1e6 + 2;

vector<ll> p;
vector<ll> v(M, 0);

void solve()
{
    v[1] = 1;
    for (ll i = 2; i < M; i++)
    {
        if (v[i] == 0)
        {
            v[i] = i;
            for (ll j = i * i; j < M; j += i)
                if (v[j] == 0)
                    v[j] = i;
        }
    }
}

int main()
{
    solve();
    for (ll i = 2; i < M; i++)
    {
        if (v[i] == i)
            p.push_back(i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        ll res = 0;
        if (v[k] == k)
            for (ll i = 0; i < p.size() && p[i] <= k; i++)
                res += p[i] * k;
        else
            for (ll i = 0; i < p.size() && p[i] <= v[k]; i++)
                res += p[i] * k;
        cout << res << '\n';
    }
    return 0;
}