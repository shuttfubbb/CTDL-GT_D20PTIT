#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> c;
        c.assign(n+1, 0);
        for(int i=1; i<=n; ++i)
            cin >> c[i];
        vector<int> dp;
        dp.assign(n+1, 0);
        dp[1] = c[1];
        for(int i=2; i<=n; ++i)
            dp[i] = max(dp[i-1], dp[i-2] + c[i]);
        cout << dp[n] << endl;
    }
    return 0;
}