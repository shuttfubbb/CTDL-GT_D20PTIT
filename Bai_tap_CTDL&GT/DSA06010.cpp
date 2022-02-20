#include <bits/stdc++.h>
using namespace std;

set<int> myset;

void xuly(long long num)
{
    if(num == 0)
    {
        myset.insert(num);
        return ;
    }
    else
    {
        while(num > 0)
        {
            myset.insert(num%10);
            num/=10;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        while(n--)
        {
            long long num;
            cin >> num;
            xuly(num);
        }
        for(auto i : myset)
            cout << i << " " ;
        cout << endl;
    }
    return 0;
}