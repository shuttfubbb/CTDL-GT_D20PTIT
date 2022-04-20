#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        if (str[0] == '0')
        {
            cout << 0 << endl;
            continue;
        }
        int n = str.size();
        int dp[n+5];
        dp[0] = 1;
        dp[1] = 1;
        for(int i=1; i<n; ++i)
        {
            dp[i] = 0;
            if(str[i] > '0')
                dp[i] += dp[i-1];
            if(str[i-1] == '1' || (str[i-1] == '2' && str[i] < '7'))
            {
                if(i == 1)
                    dp[i] += 1;
                else
                    dp[i] += dp[i-2];
            }
        }
        cout << dp[n-1] << endl;
    }
    return 0;
}