#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int A = x + 2;
        int B = y + 1;
       
        
        if (A >= y && B >= x) 
            cout << "YES" << endl;
         else 
            cout << "NO" << endl;
        
    }

    return 0;
}
