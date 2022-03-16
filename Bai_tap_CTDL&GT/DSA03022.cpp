#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[10005];
    cin >> n;
    for(int i=0; i<n ; ++i)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    int b[100];
    b[0] = a[0] * a[1];
    b[1] = a[0] * a[1] * a[n-1];
    b[2] = a[n-1] * a[n-2] * a[n-3];
    b[3] = a[n-1] * a[n-2];
    auto ans = max_element(b, b+4);
    cout << *ans << endl;
    return 0;
}