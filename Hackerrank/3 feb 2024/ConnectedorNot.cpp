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
    }
    int q;
    cin >> q;
    while (q--)
    {
        int src, des;
        cin >> src >> des;
        bool canReach = false;
        for (int child : v[src]) {
            if (child == des) {
                canReach = true;
                break;
            }
        }

        if (canReach || src == des) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}