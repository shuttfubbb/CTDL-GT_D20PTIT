#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> myvt;
    int n, x;
    cin >> n ;
    for(int i=0; i<n; ++i)
    {
        int num;
        cin >> num;
        myvt.push_back(num);
    }
    cin >> x;
    for(auto it : myvt)
    {
        if(it != x)
            cout << it << " ";
    }
    return 0;
}