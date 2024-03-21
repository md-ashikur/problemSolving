#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       
        sort(a.begin(), a.end());
        
        int pass = a[n-x];
        cout<<pass<<endl;
        cout << max(pass - 1, 0) << endl;
    }

}
