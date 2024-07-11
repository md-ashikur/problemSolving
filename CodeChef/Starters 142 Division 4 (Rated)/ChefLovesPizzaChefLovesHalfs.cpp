#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int p = 1;
        while(p*2 <= x) {
            p *= 2;
        }

        int ans = x - p;   
        cout << ans*2 << endl;
    }

    return 0;
}
