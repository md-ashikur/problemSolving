#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--) {
        int p,l;
        cin>>p>>l;
        int ans = (l*100)/p;
       
        if(ans >= 75)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

}
