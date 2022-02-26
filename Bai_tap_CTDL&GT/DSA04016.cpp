#include <bits/stdc++.h>
using namespace std;

int m, n, k;
int *a = new int[1000000];
int *b = new int[1000000];

void tim()
{

}

int main()
{
    int t;
    cin >> t;
    while(t--)   
    {
        cin >> m >> n >> k;
        for(int i=0; i<m; ++i)
            cin >> a[i];
        for(int i=0; i<n; ++i)
            cin >> b[i];
        tim(m, n);
    }
    return 0;
}