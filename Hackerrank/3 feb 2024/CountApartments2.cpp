#include <bits/stdc++.h>
using namespace std;

const int N = 10001;
char a[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int r, c;


bool valid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
    {
        return false;
    }
    return true;
}

int dfs(int si, int sj)
{
    int count = 1;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
       
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.')
        {
            count += dfs(ci, cj);
        }
    }
    return count;
}

int main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    vector<int> roomCounts;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == '.' && !vis[i][j])
            {
                int count = dfs(i, j);
                
                roomCounts.push_back(count);
            }
        }
    }
    sort(roomCounts.begin(), roomCounts.end());

    if (roomCounts.empty()) {
        cout << 0 << endl;
    } else {
        for (int count : roomCounts) {
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}
