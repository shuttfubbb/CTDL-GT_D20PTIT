#include <bits/stdc++.h>
using namespace std;

const int MD = 1e9+7;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int ans[n+5] = {0};
        ans [0] = ans[1] = 1;
        for(int i=2;i<=n; ++i)
        {
            for(int j=1; j<=min(i,k); ++j)
            {
                ans[i] += ans[i-j];
                ans[i] %= MD;
            }
        }
        cout << ans[n] << endl;
    }
    return 0;
}