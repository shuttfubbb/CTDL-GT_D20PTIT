#include <bits/stdc++.h>
using namespace std;

int a[100000];
int n, k;



int tim( int left, int right)
{
    if(left == right)
    {
        if(k == a[left])
            return left;
        else
            return -1;
    }
    int mid = (left + right)/2;
    if(k == a[mid])
        return mid;
    else if(k < a[mid])
        return tim(left, mid - 1);
    else
        return tim(mid + 1, right);
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
//       int ans =  tim(0, n-1) + 1;
        int ans =  binary_search(a, a+n, k) + 1;
        if(ans)
            cout << ans << endl;
        else
            cout << "NO\n";
    }
    return 0;
}