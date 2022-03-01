#include <bits/stdc++.h>
using namespace std;

vector<int> a, b;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        a.clear();
        b.clear();
        int n;
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            int num;
            cin >> num;
            a.push_back(num);
        }
        sort(a.begin(), a.end(), greater<int>());
        for(int i=0; i<a.size(); i+=2)
        {
            if(i+1 < a.size())
                b.push_back(a[i] + a[i+1]);
            else
                b.push_back(a[i]);
        }
        reverse(b.begin(), b.end());
        cout << endl;
        long long ans = 0;
        for(auto it : b)
        {
            ans *= 10;
            ans += it;
        }
        cout << ans << endl;
    }
    return 0;
}