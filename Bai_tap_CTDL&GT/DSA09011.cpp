#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int vs[1001];
int n, m;



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(a, 0, sizeof(a));
        memset(vs, 0, sizeof(vs));
        cin >> n >> m;
        for(int i=1; i<=n; ++i)
            for(int j=1; j<=m; ++j)
                cin >> a[i][j];
                

    }

    return 0;
}