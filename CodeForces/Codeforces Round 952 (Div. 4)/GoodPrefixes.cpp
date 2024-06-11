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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int prefix = 0;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            for (int j = 0; j <= i; j++)
            {
                if (arr[j]*2 == sum)
                {
                    prefix++;
                    break;
                }
            }
        }

        cout << prefix << endl;
    }

    return 0;
}
