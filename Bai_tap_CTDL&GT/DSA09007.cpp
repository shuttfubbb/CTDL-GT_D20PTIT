#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int vs[1001];
int v, e;
int T[1001][2];

int BFS(int u)
{
    int cnt = 0;
    queue<int> myq;
    myq.push(u);
    vs[u] = 1;
    while(!myq.empty())
    {
        int tmp = myq.front();
        myq.pop();
        for(int i=1; i<=v; ++i)
        {
            if(a[tmp][i] == 1 && vs[i] == 0)
            {
                vs[i] = 1;
                T[cnt][0] = tmp;
                T[cnt][1] = i;
                myq.push(i);
                ++cnt;
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
        int u;
        memset(a, 0, sizeof(a));
        memset(vs, 0, sizeof(vs));
        memset(T, 0, sizeof(T));
        cin >> v >> e >> u;
        for(int i=1; i<=e; ++i)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        int n = BFS(u);
        if(n == v-1)
            for(int i=0; i<n; ++i)
                cout << T[i][0] << " " << T[i][1] << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}