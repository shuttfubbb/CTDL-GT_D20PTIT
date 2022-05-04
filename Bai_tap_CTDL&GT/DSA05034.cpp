#include <bits/stdc++.h>
using namespace std;

const int MD = 1e9+7;
vector<vector<int> > f (101, vector<int> ( 100001,0));

void init()
{
    for(int i=1; i<=100000; ++i)
        f[1][i] = 1;
    for(int i=1; i<=100; ++i)
        f[i][0] = 1;
    for(int i=2; i<=100; ++i)
    {
        long long s;
        for(int j=1; j<=100000; ++j)
        {
            if(i == j)
                s = f[i-1][j] + 1;
            else if(i > j)
                s = f[i-1][j];
            else
                s = s - f[i][j-i-1] + f[i][j-1];
                // f[i][j] = f[i][j-1] * 2 - f[i][j-1-i]; ???????
            f[i][j] = s % MD;\
        }
    }
}

int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        cout << f[k][n] << endl;
    }
    return 0;
}