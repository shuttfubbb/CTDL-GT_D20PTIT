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
        int a[n+5], f[n+5];
        memset(f, 0, sizeof(f));
        for(int i=0; i<n; ++i)
        {
            cin >> a[i];
            f[i] = 1;
        }
        for(int i=0; i<n; ++i)
        {    
            for(int j=0; j<i; ++j)
            {
                if(a[i] >= a[j])
                {
                    f[i] = max(f[i], f[j] + 1);
                }
            }
        }
        cout << n - f[n-1] << endl;
    }
    return 0;
}