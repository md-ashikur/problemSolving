#include <bits/stdc++.h>
using namespace std;

int isSorted(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {

        if (a[i] > a[+1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (isSorted(a, n))
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