#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << j;
            }
        }
        else if (i == n)
        {
            for (int j = n; j >= 1; j--)
            {
                cout << j;
            }
        }
        else
        {
            cout << i;
            for (int k = 1; k < i; k++)
            {
                 cout << " ";
            }
            
            for (int k = 0; k < (n - i - 1); k++)
            {
                cout << " ";
            }
            cout << n - i + 1;
        }
        cout << endl;
    }

    return 0;
}