#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int vs[1001];
int v, e;

void BFS(int node)
{
    queue<int> myq;
    myq.push(node);
    vs[node] = 1;
    while(!myq.empty())
    {
        int tmp = myq.front();
        cout << tmp << " ";
        vs[tmp] = 1;
        myq.pop();
        for(int i=1; i<=v; ++i)
        {
            if(a[tmp][i] == 1 && vs[i] == 0)
            {
                vs[i] = 1;
                myq.push(i);
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
        int node;
        cin >> v >> e >> node;
        memset(a, 0, sizeof(a));
        memset(vs, 0, sizeof(vs));
        for(int i=1; i<=e; ++i)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
        }
        BFS(node);
        cout << endl;
    }
    return 0;
}