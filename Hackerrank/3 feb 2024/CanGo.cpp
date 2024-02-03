#include <bits/stdc++.h>
using namespace std;

const int N = 10001;
char a[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int r, c;
bool pathFound = false;

bool valid(int i, int j) {
    if (i < 0 || i >= r || j < 0 || j >= c) {
        return false;
    }
    return true;
}

void dfs(int si, int sj) {
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == 'B') {
            pathFound = true;
           
        }
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.') {
            dfs(ci, cj);
        }
    }
}

int main() {
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 'A') {
                dfs(i, j);
            }
        }
    }

    if (pathFound) cout << "YES" << endl;
    else  cout << "NO" << endl;
    

    return 0;
}
