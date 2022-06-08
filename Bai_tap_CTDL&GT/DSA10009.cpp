#include <bits/stdc++.h>
using namespace std;

const int MAX = 2000000000;

int v, e;
int a[101][101], d[101][101], p[101][101];

int main()
{
    cin >> v >> e;
    for(int i=1; i<=v; ++i)
        for(int j=1; j<=v; ++j)
            a[i][j] = MAX;
    for(int i=1; i<=e; ++i)
    {
        int x, y, val;
        cin >> x >> y >> val;
        a[x][y] = val;
        a[y][x] = val;
    }
    // ---------FLOY-----------
    // INIT
    for(int i=1; i<=v; ++i)
    {
        for(int j=1; j<=v; ++j)
        {
            d[i][j] = a[i][j];
            if(d[i][j] == MAX)
                p[i][j] = 0;
            else
                p[i][j] = i;
        }
    }
    for(int k=1; k<=v; ++k)
    {
        for(int i=1; i<=v; ++i)
        {
            for(int j=1; j<=v; ++j)
            {
                if(d[i][k] != MAX && d[i][j] > d[i][k] + d[k][j])
                {
                    d[i][j] = d[i][k] + d[k][j];
                    p[i][j] = p[k][j];
                }
            }
        }
    }
    int q;
    cin >> q;
    while(q--)
    {
        int s, f;
        cin >> s >> f;
        cout << d[s][f] << endl;
    }
    return 0;
}