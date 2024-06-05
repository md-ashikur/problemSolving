#include <bits/stdc++.h>
using namespace std;

#define int long long int


int main()
{

    int t;
    cin >> t;
  
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        int f = 0;
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                break;
            }
            if (a[i] + p[i] >= a[i + 1])
            {
            }
            else
            {
                count++;
            }
        }

        if (count <= 2)
        {
            f = 1;
        }
     
        count = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            if (i == 0)
            {
                break;
            }
            if (a[i] - p[i] <= a[i - 1])
            {
            }
            else
            {
              
                count++;
            }
        }

       
        if (count <= 2)
        {
            f = 1;
        }
      
        int left = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] + p[i] >= a[i + 1])
        
                left = i + 1;
            
            else
            break;
            
        }
        int right = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] - p[i] <= a[i - 1])
            {
                right = i - 1;
            }
            else
            {
                break;
            }
        }
        if (left + 1 >= right)
            f = 1;
        if (f)
        {
            cout << "YES" << endl;
            continue;
        }
      
        for (int i = 1; i < n; i++)
        {
            if (a[i] - p[i] <= a[i - 1])
            {
                continue;
            }
            else
            {
                
                for (int j = i; j < n; j++)
                {
                    if (j == n - 1)
                    {
                        f = 1;
                    }
                    if (a[j] + p[j] >= a[j + 1])
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }

                break;
            }
        }

        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}