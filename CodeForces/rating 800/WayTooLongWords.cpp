#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        char firstChar = s[0];
        char lastChar = s[s.length() - 1];

        if (s.length() > 10)
        {
            cout << firstChar << s.length() - 2 << lastChar << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}