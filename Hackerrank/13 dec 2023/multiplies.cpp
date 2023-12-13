#include <iostream>
using namespace std;

long long int sumOfMultiples(long long int n, long long int x) {
    n--;
    long long int div = n / x;
    return x * div * (div + 1) / 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;

        long long int sum = sumOfMultiples(n, 3) + sumOfMultiples(n, 5) - sumOfMultiples(n, 15);
        
        cout << sum << endl;
    }
    return 0;
}
