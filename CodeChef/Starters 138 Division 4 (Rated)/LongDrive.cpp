#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while (t--) {
        int x, y;
        cin>>x>>y;
        int dis = 10 *x;
        int reqDis = 10 *y;
        int remain = reqDis - dis;
        int ans = (remain + 100 - y -1) / (100-y);

        cout<<ans<<endl;
    }

}
