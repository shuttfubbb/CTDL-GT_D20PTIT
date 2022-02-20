#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> a,b;
        int n;
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            int num;
            cin >> num;
            a.push_back(num);
            b.push_back(num);
        }
        sort(b.begin(), b.end());
        int x=0,y=n-1;
        while(a[x] == b[x])
            ++x;
        while(a[y] == b[y])
            --y;
        cout << x+1 << " " << y+1 << endl;
    }
    return 0;
}