#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[1000];
bool check = true;

void in(int c[])
{
    int sum = 0;
    cout << "[";
    for(int i=0; i<n; ++i)
    {
        if(a[i] == 1)
        {
            sum += c[i]*a[i];
            if(sum != k)
                cout << c[i] << " ";
            else
                cout << c[i];
        }
    }
    cout << "] ";
}
void tinh(int c[], int x, int sum)
{
    if(sum < k)
    {
        for(int i=1; i>=0; --i)
        {
            a[x] = i;
            if(sum + (c[x] * a[x]) <= k && x < n)
                tinh(c, x + 1, sum + (c[x] * a[x]));
        }
    }
    else if(sum == k)
    {
        in(c);
        check = false;
    }
        
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int c[10000];
        cin >> n >> k;
        for(int i=0; i<n; ++i)
        {
            cin >> c[i];
        }
        sort(c, c+n);
        tinh(c, 0, 0);
        if(check)
            cout << -1;
        cout << endl;
    }
    return 0;
}