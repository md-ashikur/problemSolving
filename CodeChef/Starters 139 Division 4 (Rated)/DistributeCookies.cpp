#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int s = m/n;
        m=m%n;
        if(s<1) cout<<m-n<<endl;
        else cout<<min(abs(n-m), m)<<endl;
    }

}
