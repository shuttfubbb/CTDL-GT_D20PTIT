#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int check = 0;
        int a[1000];
        memset(a, 0, sizeof(a));
        for(auto it : str)
            a[it] ++;
        for(auto x : a)
            check = max(x, check);
        if((str.size() % 2 == 1 && check <= str.size()/2 + 1) || (str.size() % 2 == 0 && check <= str.size() / 2))
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}