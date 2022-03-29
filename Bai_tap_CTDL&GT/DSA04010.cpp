#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[10005];
        int n;
        cin >> n;
        for(int i=0; i<n; ++i)
            cin>> a[i];
        int ans = a[0];
        int sum = 0;
        for(int i=0; i<n; ++i)
        {
            sum += a[i];
            ans = max(ans, sum);
            if(sum < 0)
                sum = 0;
        }
        cout << ans << endl;
    }
    return 0;
}