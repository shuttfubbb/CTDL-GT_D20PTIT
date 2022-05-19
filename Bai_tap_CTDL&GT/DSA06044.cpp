#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a,b;
    a.assign(n, 0);
    for(int i=1; i<=n; ++i)
    {
        int x;
        cin >> x;
        if(i % 2 == 0)
            a.push_back(x);
        else
            b.push_back(x);
    }
    sort(b.begin(), b.end());
    sort(a.begin(), a.end(), greater<int>());
    int i=0, j = 0;
    for(int p=1; p<=n; ++p)
    {
        if(p%2 == 1 && i <= b.size() - 1)
        {
            cout << b[i] << " " ;
            ++i;
        }
        else if(p % 2 == 0 && j <= a.size() - 1)
        {
            cout << a[j] << " ";
            ++j;
        }
    }
    return 0;
}