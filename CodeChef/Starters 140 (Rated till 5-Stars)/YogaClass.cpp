#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, x, y;
        cin >> n >> x >> y;
        int count = n/2;

        if (x* 2 > y)
        {
           
            cout<< n * x<< endl;
          
        }
        else {
             cout <<  count*y + (n - count*2) * x<<endl; 
        }

      
    }
}
