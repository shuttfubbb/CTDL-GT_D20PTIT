#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];
int v, e, node;
int visit[1001];

void DFS(int node)
{
    cout << node << " ";
    visit[node] = 1;
    for(int i=1; i<=v; ++i)
    {
        if(a[node][i] == 1 && visit[i] == 0)
        {
            visit[i] = 1;
            DFS(i);
        }
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(a, 0, sizeof(a));
        memset(visit, 0, sizeof(visit));
        cin >> v >> e >> node;
        for(int i=1; i<=e; ++i)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
        }
        DFS(node);
        cout << endl;
    }
    return 0;
}