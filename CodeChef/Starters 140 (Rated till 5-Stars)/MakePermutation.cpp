#include <bits/stdc++.h>
using namespace std;

bool solve(int n, vector<int> arr)
{
    vector<int> v(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j <= n; j++)
        {
            int c = arr[i] + j;
            if (c >= 1 && c <= n && !v[c])
            {
                v[c] = 1;
                found = true;
                break;
            }
        }
        if (!found)
           return false; 
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (solve(n, arr))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
