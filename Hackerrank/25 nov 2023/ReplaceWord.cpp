#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s;
        cin >> x;
        size_t found = 0;
        while ((found = s.find(x)) != (-1))
        {
            s.replace(found, x.length(), "#");
            found += 1;
        }

        cout << s << endl;
    }

    return 0;
}