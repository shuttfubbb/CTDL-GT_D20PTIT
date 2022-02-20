#include <bits/stdc++.h>
using namespace std;

set<string> myset;
vector<string> myvt;
int a[10000];

int n, k;

void in()
{
    for(int i=0; i<k; ++i)
        cout << myvt[a[i]] << " ";
    cout << endl;
}

void sinh(int j, int x)
{
    if(j < k)
    {
        for(int i=x; i<=n-k+j; ++i)
        {
            a[j] = i;
            sinh(j+1, i+1);
        }
    }
    else
        in();
}

int main()
{
    int size;
    cin >> size >> k;
    for(int i=0; i<size; ++i)
    {
        string s;
        cin >> s;
        myset.insert(s);
    }
    n = myset.size();
    for(auto it : myset)
        myvt.push_back(it);
    sinh(0,0);
    return 0;
}