#include <bits/stdc++.h>
using namespace std;

int m, n, k;
vector<int> a, b;

int main()
{
    int t;
    cin >> t;
    while(t--)   
    {
        a.clear();
        b.clear();
        cin >> m >> n >> k;
        vector<int> myvt(n + m + 5);
        a.assign(m, 0);
        b.assign(n, 0);
        for(auto &i : a)
            cin >> i;
        for(auto &i : b)
            cin >> i;
        merge(a.begin(), a.end(), b.begin(), b.end(), myvt.begin());
        cout << myvt[k-1] << endl;
    }
    return 0;
}