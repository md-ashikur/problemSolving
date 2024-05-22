#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{

    int count1 = 0, count2 = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            if (i == 0 || s[i - 1] != '0')
            {
                count1++;
            }
        }
        else{
            if(i==0 || s[i-1] != '1'){
             count2++;
            }
        }
    }

    return min(count1, count2);
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = solve(s);
        cout<<ans<<endl;
    }

    return 0;
}
