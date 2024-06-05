#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        string str = "ABCDEFG";
        unordered_map<char, int> mp;

        for (char c : str)
        {
            mp[c] = 0;
        }

        for (char c : s)
        {
            mp[c]++;
        }

        int count = 0;
        for (char c : str)
        {
            if (mp[c] < m)
            {
               count += m - mp[c];
            }
        }

        cout << count << endl;
    }

    return 0;
}
