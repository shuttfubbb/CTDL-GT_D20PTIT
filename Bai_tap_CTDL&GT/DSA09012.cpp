#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > a (1001, vector<int>(1001, 0));
int visit[1001];
int v, e;

int DFS(int x)
{
    stack<int> mys;
    mys.push(x);
    int ans = 1;
    visit[x] = 1;
    while(!mys.empty())
    {
        int tmp = mys.top();
        visit[tmp] = 1;
        mys.pop();
        for(int i=1; i<=v; ++i)
        {
            if(a[tmp][i] == 1 && visit[i] == 0)
            {
                visit[i] = 1;
                mys.push(i);
                ++ans;
            }
        }
    }
    return ans;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        for(int i=0; i<1001; ++i)
            for(int j=0; j<1001; ++j)
                a[i][j] = 0;
        cin >> v >> e;
        for(int i=1; i<=e; ++i)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        memset(visit, 0, sizeof(visit));
        for(int i=1; i<=v; ++i)
        {
            visit[i] = 1;
            int node;
            for(node = 1; node<=v; ++node)
                if(node != i)
                    break;
            if(DFS(node) != v-1)
                cout << i << " ";
            memset(visit, 0, sizeof(visit));
        }
        cout << endl;
    }
    return 0;
}