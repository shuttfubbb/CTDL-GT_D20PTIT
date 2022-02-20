#include <bits/stdc++.h>
using namespace std;

int m,n;
int a[105][105];
int x[2] = {0, 1};
int y[2] = {1, 0};
void dem(int xa, int ya, int *res)
{
    for(int i=0; i<2; ++i)
    {
        if(xa + x[i] < m && ya + y[i] < n)
        {
            if(xa + x[i] == m-1 && ya + y[i] == n-1)
                ++*res;
            dem(xa + x[i], ya + y[i], res);
        }
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int res = 0;
        cin >> m >> n;
        for(int i=0; i<m; ++i)
            for(int j=0; j<n; ++j)
                cin >> a[i][j];
        dem(0, 0, &res);
        cout << res << endl;
    }
    return 0;
}