#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, a, b;
        cin >> h >> a >> b;
        int flag = 0;
        if (a >= h)
            flag = 1;
        else if (a < b)
            flag = 0;

        int mint = 1;
        int clmb = a;

        while (clmb < h)
        {
            clmb += (a - b);
            mint++;
        }
        if (flag == 0)
            cout << "Impossible" << endl;
        else
            cout << mint << endl;
    }

    return 0;
}