#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 3)
        {
            cout << "1 2 3" << endl;
        }
        else if (n % 2 == 0)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << i << " " << n + 1 - i << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << i << " " << n - i  << " ";
            }
            cout << n << endl;
        }
    }

    return 0;
}
