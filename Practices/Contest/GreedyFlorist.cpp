#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int getMinimumCost(vector<int> c, int k) {
    sort(c.begin(), c.end(), cmp);
    
    int m = 0;
    int totalCost = 0;
    
    for (int i = 0; i < c.size(); i++) {
        totalCost += (m / k + 1) * c[i];
        m++;
    }
    
    return totalCost;
}
int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> c(n);

    for (int i = 0; i < n; i++) cin >> c[i];
    int result = getMinimumCost(c, k);
    cout << result << endl;

    return 0;
}