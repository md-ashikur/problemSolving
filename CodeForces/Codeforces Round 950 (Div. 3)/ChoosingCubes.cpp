#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int favNum = arr[f - 1];

        sort(arr.begin(), arr.end(), greater<int>());

        if (favNum > arr[k - 1])
        {
            cout << "YES" << endl;
        }
        else if (favNum == arr[k - 1])
        {
            if (k == n || arr[k] != favNum)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "MAYBE" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
