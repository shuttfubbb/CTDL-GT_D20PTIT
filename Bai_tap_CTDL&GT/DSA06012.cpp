#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        a.assign(n,0);
        for(auto &i : a)
            cin >> i;
        sort(a.begin(), a.end(), greater<int>());
        for(int i=0; i<k; ++i)
            cout << a[i] << " ";
        cout << endl;
    }
    
    return 0;
}