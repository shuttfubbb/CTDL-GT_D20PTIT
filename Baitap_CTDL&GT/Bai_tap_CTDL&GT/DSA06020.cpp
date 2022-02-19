#include <bits/stdc++.h>
using namespace std;

int a[100000];
int n, k;



int tim( int left, int right)
{
    if(left <= right)
    {
        int mid = left + (right - left)/2;
        if(k == a[mid])
            return 1;
        else if(k < a[mid])
            return tim(left, mid - 1);
        else
            return tim(mid + 1, right);
    }
    return -1;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i=0; i<n; ++i)
            cin >> a[i];
        cout <<   tim(0, n-1) << endl;
        
    }
    return 0;
}