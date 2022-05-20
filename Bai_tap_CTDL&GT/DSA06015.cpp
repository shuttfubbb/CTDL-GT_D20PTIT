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
        vector<int> a;
        a.assign(n, 0);
        for(auto &i : a)    
            cin >> i;
        sort(a.begin(), a.end());
        for(auto i: a)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}