#include <bits/stdc++.h>
using namespace std;

int S[10000], F[10000], n;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int ans = 1;
        cin >> n;
        for(int i=0; i<n; ++i)
            cin >> S[i];
        for(int i=0; i<n; ++i)
            cin >> F[i];
        for(int i=0; i<n-1; ++i)
        {
            for(int j=i+1; j<n; ++j)
            {
                if(F[i] > F[j])
                {
                    swap(F[i], F[j]);
                    swap(S[i], S[j]);
                }
            }
        }
        int j = 0;
        for(int i=1; i<n; ++i)
        {
            if(S[i] >= F[j])
            {
                ++ans;
                j = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}