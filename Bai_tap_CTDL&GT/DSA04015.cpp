#include <bits/stdc++.h>
using namespace std;

vector<int > a;
int n, x;

int tim(int left, int right)
{
    int mid = (left + right) / 2;
    if(a[mid] == x || (a[mid] < x && a[mid+1] > x))
        return mid;
    else if(a[mid] > x)
        return tim(left, mid-1);
    return tim(mid+1, right);
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        a.clear();
        cin >> n >> x;
        a.assign(n, 0);
        for(auto & i : a)
            cin >> i;
        if(x < a[0])
            cout << -1 << endl;
        else
            cout << tim(0, n-1) + 1 << endl;
    }
    return 0;
}