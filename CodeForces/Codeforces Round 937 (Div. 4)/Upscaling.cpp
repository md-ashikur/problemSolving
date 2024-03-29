#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int minHeight;

        if (a == 0 && b == 0 && c == 1) {
            minHeight = 0;
        } else if ((a == 0 && b == 1) || (a == 1 && b == 0 && c == 2)) {
            minHeight = 1;
        } else if (a >= 2 && b >= 1 && c >= 3) {
            minHeight = 2;
        } else if (a >= 3) {
            minHeight = a + b - 2;
        } else {
            minHeight = -1; // No such tree exists
        }

        cout << minHeight << endl;
    }

    return 0;
}
