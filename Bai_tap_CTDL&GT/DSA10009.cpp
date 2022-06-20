#include <bits/stdc++.h>
using namespace std;

/*
------------------------FLOYD----------------------
*/

long long a[101][101];
long long d[101][101];
long long p[101][101];
int v, e;
const int MAX = __INT_MAX__;



int main()
{
    // INIT
    cin >> v >> e;
    for(int i=1; i<=v; ++i)
        for(int j=1; j<=v; ++j)
            a[i][j] = MAX;
    for(int i=1; i<=e; ++i)
    {
        int x, y, num;
        cin >> x >> y >> num;
        a[x][y] = num;
        a[y][x] = num;
    }

    for(int i=1; i<=v; ++i)
    {
        for(int j=1; j<=v; ++j)
        {
            d[i][j] = a[i][j];
            if(a[i][j] == MAX)
                p[i][j] = 0;
            else
                p[i][j] = i;
        }
    }
    // FLOY
    for(int k=1; k<=v; ++k)
    {
        for(int i=1; i<=v; ++i)
        {
            for(int j=1; j<=v; ++j)
            {
                if(d[i][j] > d[i][k] + d[k][j] && d[i][k] != MAX)
                {
                    d[i][j] = d[i][k] + d[k][j];
                    p[i][j] = p[k][j];
                }
            }
        }
    }
    // ANSWER
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