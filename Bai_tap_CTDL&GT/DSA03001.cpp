#include <bits/stdc++.h>
using namespace std;

int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        int i = 9;
        while(n)
        {
            if(n >= a[i])
            {
                ++ans;
                n-=a[i];
            }
            else
                --i;
        }
        cout << ans << endl;
    }
    return 0;
}