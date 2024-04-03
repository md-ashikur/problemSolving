#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, l, r;
        cin >> n >> l >> r;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int maxhappy = 0;
        int minhappy = 0;
        int happy = 0;

        for (int i = 0; i < n; i++)
        {

            if (ar[i] >= l && ar[i] <= r)
            {
                happy++;
            }

            else
            {
                happy--;
            }
            maxhappy = max(maxhappy, happy);
            minhappy = min(minhappy, happy);
        }

        cout << maxhappy << " " << minhappy << endl;
    }
    return 0;
}