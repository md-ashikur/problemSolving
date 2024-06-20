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
        vector<int> arr(n), arr2(n);

        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        int mid = (n + 1) / 2;
        for (int i = 0; i < n - mid; i++)
        {
            arr2[i] = arr[mid + i];
        }
        for (int i = 0; i < mid; i++)
        {
            arr2[n - mid + i] = arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
}
