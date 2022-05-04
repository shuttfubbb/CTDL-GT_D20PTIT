#include <bits/stdc++.h>
using namespace std;

int c, n;
vector<int> myvt;


int main()
{
    cin >> c >> n;
    myvt.assign(n+1, 0);
    vector<vector<int> > f (n+1, vector<int> (c+1, 0));
    for(int i=1; i<=n;++i)
        cin >> myvt[i];
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=c; ++j)
        {
            if(j >= myvt[i])
                f[i][j] = max(f[i-1][j], f[i-1][j-myvt[i]] + myvt[i]);
            else
                f[i][j] = f[i-1][j];
        }
    }
    cout << f[n][c] ;
    return 0;
}