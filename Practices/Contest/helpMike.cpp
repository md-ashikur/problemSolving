#include <bits/stdc++.h>
using namespace std;

int pairs(long int n, int k) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if ((i + j) % k == 0) {
                count++;
            }
        }
    }

    return count;
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        long int n, k;
        cin >> n >> k;
        long int result =pairs(n, k);
        cout << result << endl;
    }

    return 0;
}
