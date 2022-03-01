#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<int> myvt;
set<int> myset;
int a[1005];

void in()
{
    for(int i=1; i<=k; ++i)
        cout << myvt[a[i]-1] << " ";
    cout << endl;
}

void sinh(int i)
{
    for(int j=a[i-1]+1; j<=n-k+i; ++j)
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
    cin >> n >> k;
    for(int i=0; i<n; ++i)   
    {
        int num;
        cin >> num;
        myset.insert(num);
    }
    for(auto it : myset)
        myvt.push_back(it);
    n = myvt.size();
    sinh(1);
    return 0;
}