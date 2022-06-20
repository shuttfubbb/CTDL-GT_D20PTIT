#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int v, e;
int visit[1001];
int res[1001][1001];

void DFS(int node)
{
    stack<int> mys;
    mys.push(node);
    visit[node] = 1;
    while(!mys.empty())
    {
        int tmp = mys.top();
        visit[tmp] = 1;
        mys.pop();
        for(int i=1; i<=v; ++i)
        {
            if(a[tmp][i] == 1 && visit[i] == 0)
            {
                res[node][i] = res[i][node] = 1;
                mys.push(i);
                visit[i] = 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> v >> e;
        memset(a, 0, sizeof(a));
        memset(visit, 0, sizeof(visit));
        memset(res, 0, sizeof(res));
        for(int i=1; i<=e; ++i)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        for(int i=1; i<=v; ++i)
        {
            memset(visit, 0, sizeof(visit));
            DFS(i);
        }
        int q;
        cin >> q;
        while(q--)
        {
            int x, y;
            cin >> x >> y;
            if(res[x][y])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}