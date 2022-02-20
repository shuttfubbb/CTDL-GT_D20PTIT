#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[10000], n;
        cin >> n;
        for(int i=0; i<n; ++i)
            cin >> a[i];
        sort(a, a+n, greater<int>());
        int  i=0, j=n-1;
        while(i <= j)
        {
            if(i<j)
            {
                cout << a[i] <<" ";
                cout << a[j] << " ";
                ++i;
                --j;
            }
            if(i==j)
            {
                cout << a[j] << " ";
                break;
            }
        }
        cout << endl;
    }
    return 0;
}