#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] == a[j])
            {
                flag = true;
            }
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}