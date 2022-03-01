#include <bits/stdc++.h>
using namespace std;

int n, k;
long long ans;
const int MD = 1000000007;

void quaylui(long long sum)
{
    for(int j=1; j<=k; ++j)
    {
        if(sum + j == n)
        {
            ++ ans;
            ans %= MD;
            break;
        }
        else if(sum + j > n)
            break;
        else
            quaylui(sum + j);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ans = 0;
        cin >> n >> k;
        quaylui(0);
        cout << ans << endl;
    }

    return 0;
}