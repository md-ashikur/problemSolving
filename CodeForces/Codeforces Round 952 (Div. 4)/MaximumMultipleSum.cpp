#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        int x = 2;
        int mx = 0;

        for (int i = 2; i <= n; i++) {
            int sum = 0;
            for (int j = 1; j * i <= n; j++) {
                sum += j * i;
            }
            if (sum > mx) {
                mx = sum;
                x = i;
            }
        }

        cout << x << endl;
    }

    return 0;
}
