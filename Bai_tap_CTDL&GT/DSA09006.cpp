#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];
int vs[1001];
int res[1001];
int v, e;
int s, f;

void DFS(int node)
{
    stack<int> mys;
    mys.push(node);
    while(!mys.empty())
    {
        int tmp = mys.top();
        vs[tmp] = 1;
        mys.pop();
        for(int i=1; i<=v; ++i)
        {
            if(a[tmp][i] == 1 && vs[i] == 0)
            {
                res[i] = tmp;
                vs[i] = 1;
                mys.push(i);
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
        memset(a, 0, sizeof(a));
        memset(vs, 0, sizeof(vs));
        memset(res, 0, sizeof(res));
        cin >> v >> e >> s >> f;
        for(int i=1; i<=e; ++i)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        DFS(s);
        if(vs[f])
        {
            vector<int> ans;
            int t = v;
            while(t > 0)
            {
                ans.push_back(t);
                t = res[t];
            }
            reverse(ans.begin(), ans.end());
            for(auto it : ans)
                cout << it << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}