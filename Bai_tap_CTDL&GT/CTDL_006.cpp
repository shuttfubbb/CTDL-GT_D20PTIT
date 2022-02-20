#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100000], k=0;
    cin >> n;
    for(int i=0 ; i<n; ++i)
    {   
        int dd = 1;
        int num;
        cin >> num;
        for(int j=0; j<k; ++j)
            if(a[j] == num)
            {
                dd = 0;
                break;
            }
        if(dd)
        {
            a[k] = num;
            ++k;
        }
    }
    for(int i=0 ; i<k; ++i)
        cout << a[i] << " ";
    return 0;
}