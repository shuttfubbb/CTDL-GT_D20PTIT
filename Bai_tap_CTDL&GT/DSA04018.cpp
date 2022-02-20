#include <bits/stdc++.h>
using namespace std;

int a[100000];
int n;

int demzero(int left, int right)
{
    if(left <= right)
    {
        int mid = (left + right) / 2;
        if(a[mid] == 0)
            return mid - left + 1 + demzero(mid + 1, right);
        else
            return demzero(left, mid-1);
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        cin >> n;
        for(int i=0; i<n; ++i)
            cin >> a[i];
        cout << demzero(0, n-1) << endl;
    }
    return 0;
}