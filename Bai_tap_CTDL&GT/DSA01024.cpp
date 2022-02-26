#include <bits/stdc++.h>
using namespace std;

set<string> myset;
vector<string> myvt;

int n,k;
int a[10001];

void in()
{
    for(int i=1; i<=k; ++i)
        cout << myvt[a[i]-1] << " ";
    cout << endl;
}

void xuly()
{
    for(auto it = myset.begin(); it != myset.end(); ++it)
        myvt.push_back(*it);
}

void sinh(int i)
{
    for(int j=a[i-1]+1; j <= n-k+i; ++j)
    {
        a[i] = j;
        if(i == k)
            in();
        else
            sinh(i+1);
    }
}

int main()
{
    a[0] = 0;
    myset.clear();
    myvt.clear();
    cin >> n >> k;
    for(int i=0; i<n; ++i)
    {
        string str;
        cin >> str;
        myset.insert(str);
    }
    n = myset.size();
    xuly();
    sinh(1);
    return 0;
}