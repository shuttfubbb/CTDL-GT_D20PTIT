#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, v;
        cin >> n >> v;
        int a[10000], c[10000];
        for(int i=1; i<=n; ++i)
            cin >> a[i];
        for(int i=1; i<=n; ++i)
            cin >> c[i];
        vector<vector<int> > f (n+1, vector<int> (v+1, 0));
        for(int i=0; i<=v; ++i)
        {
            f[0][i] = 0;
        }
        for(int i=1; i<=n; ++i)
        {
            for(int j=0; j<=v; ++j)
            {
                f[i][j] = f[i-1][j];
                if(j >= a[i] && f[i][j] < f[i-1][j-a[i]]+c[i])
                {
                    f[i][j] = f[i-1][j-a[i]]+c[i];
                }
            }
        }
        cout << f[n][v] << endl;
    }
    return 0;
}