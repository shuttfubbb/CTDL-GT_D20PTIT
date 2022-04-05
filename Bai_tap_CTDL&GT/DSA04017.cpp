#include <bits/stdc++.h>
using namespace std;

vector<long long> a,b;
int n;

int tim(int left, int right)
{
    int mid = (left + right) / 2;
    if(a[mid] != b[mid] && a[mid-1] == b[mid-1])
        return mid;
    else if(a[mid] == b[mid])
        return tim(mid+1, right);
    return tim(left, mid-1);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        a.clear();
        b.clear();
        cin >> n;
        a.assign(n, 0);
        b.assign(n-1, 0);
        for(auto &i : a)
            cin >> i;
        for(auto &i : b)
            cin >> i;
        if(n == 1)
            cout << 1 << endl;
        else if(n == 2)
        {
            if(a[0] == b[0])
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
        else
        {
            if(a[n-2] == b[n-2])
                cout << a[n-1] << endl;
            else
                cout << tim(0, n-2) + 1 << endl;
        }
    }
    return 0;
}