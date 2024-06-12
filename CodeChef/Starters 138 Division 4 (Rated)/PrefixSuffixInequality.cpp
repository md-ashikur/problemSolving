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
        vector<int> arr;

        for (int i = 0; i < n - 2; i++)
        {
            arr.push_back(5);
        }

        arr.push_back(6);
        arr.push_back(3);
        
        bool flag = true;
        if (n == 1)
        {
            cout << "1" << endl;
            flag = false;
        }

        if (flag)
        {
            for (int a : arr)
            {
                cout << a << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
