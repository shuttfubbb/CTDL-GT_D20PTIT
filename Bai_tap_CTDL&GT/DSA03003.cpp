#include <bits/stdc++.h>
using namespace std;

const int MD = 1000000007;
vector<int> a;

int main()
{
    int t;
    cin >> t;
    while(t--)   
    {
        a.clear();
        int n;
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            int num;
            cin >> num;
            a.push_back(num);
        }
        sort(a.begin(), a.end());
        long long ans = 0;
        for(int i=0; i<n; ++i)
        {
            ans += (a[i] * i);
            ans %= MD;
        }
        cout << ans << endl;
    }
    return 0;
}