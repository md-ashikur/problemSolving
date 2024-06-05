#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll solve(int n, int k, vector<ll> arr) {
   
    ll sum = 0;
    for (int i = 0; i<n-1; i++) {
        sum += abs(arr[i]-arr[i + 1]);
    }

    ll mx = sum, ans=0;
    
    for (int i = 0; i < n; i++) {
        if (i > 0) {
             ans = sum - abs(arr[i] - arr[i - 1]) + abs(1 - arr[i - 1]);
            if (i < n-1) {
                ans -= abs(arr[i] - arr[i + 1]);
                ans += abs(1 - arr[i + 1]);
            }
            mx = max(mx, ans);
        }
        
        if (i < n-1) {
         
            ans = sum - abs(arr[i] - arr[i + 1]) + abs(k - arr[i + 1]);
            if (i > 0) {
                ans -= abs(arr[i] - arr[i - 1]);
                ans += abs(k - arr[i - 1]);
            }
            mx = max(mx, ans);
        }
    }
    
    return mx;
}

int main() {
    int t;
    cin >> t;
   
   while(t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
     
        cout <<   solve(n, k, arr) << endl;
    }
    
 

    return 0;
}

