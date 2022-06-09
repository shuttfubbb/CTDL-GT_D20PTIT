#include <bits/stdc++.h>
using namespace std;

int v, e;
int a[1001][1001];
int b[1000000][1];
int duyet[1001];

int DFS(int x)
{
    int ans = 1;
    stack<int> s;
    s.push(x);
    while(!s.empty())
    {
        int tmp = s.top();
        //cout << tmp << " ";
        duyet[tmp] = 1;
        s.pop();
        for(int i=1; i<=v; ++i)
        {
            if(a[tmp][i] == 1 && duyet[i] == 0)
            {
                duyet[i] = 1;
                s.push(i);
                ++ans;
            }
        }
    }
    //cout << endl;
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(duyet, 0, sizeof(duyet));
        cin >> v >> e;
        for(int i=1; i<=e; ++i)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        for(int i=1; i<=v; ++i)
        {
            for(int j=i+1; j<=v; ++j)
            {
                if(a[i][j] == 1)
                {
                    a[i][j] = 0;
                    a[j][i] = 0;
                    memset(duyet, 0, sizeof(duyet));
                    if(DFS(1) != v)
                    {
                        cout << i << " " << j << " ";
                    }
                    memset(duyet, 0, sizeof(duyet));
                    a[i][j] = 1;
                    a[j][i] = 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}