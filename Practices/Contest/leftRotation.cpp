#include <bits/stdc++.h>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    vector<int> rotated(n);

    for (int i = 0; i < n; i++) {
        int newIndex = (i - d + n) % n;
        rotated[newIndex] = arr[i];
    }

    return rotated;
}

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = rotateLeft(d, arr);

for(int val: result) {
    cout<<val<<" ";
}
   
    cout << endl;

    return 0;
}
