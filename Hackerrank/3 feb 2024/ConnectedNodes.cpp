#include <bits/stdc++.h>
using namespace std;
const int N = 10001;
vector<int> v[N];

int main()
{

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int src;
        cin >> src;
        vector<int> connected = v[src];
        if (connected.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(connected.begin(), connected.end(), greater<int>());
            for (int c : connected)
            {
                cout << c << " ";
            }
            cout << endl;
        }
    }
    return 0;
}