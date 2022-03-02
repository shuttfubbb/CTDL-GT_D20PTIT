#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)   
    {
        int a[100000], b[100000], n;
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a+n);
        int check = 1;
        for(int i=0; i<n/2; ++i)
        {
            if(!(a[i] == b[i] || a[i] == b[n-1-i]))
                check = 0;
        }
        if(check)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}