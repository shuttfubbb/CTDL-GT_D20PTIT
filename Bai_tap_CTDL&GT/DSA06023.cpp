#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1000];
    for(int i=0; i<n; ++i)
        cin >> a[i];
    int step = 1;
    for(int i=0; i<n-1; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
        cout << "Buoc " << step << ": ";
        for(int t=0; t<n; ++t)
            cout << a[t] << " ";
        cout  << endl;
        ++step;
    }
    return 0;
}