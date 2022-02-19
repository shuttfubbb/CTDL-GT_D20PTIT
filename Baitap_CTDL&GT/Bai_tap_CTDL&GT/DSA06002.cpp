#include <bits/stdc++.h>
using namespace std;

int x;

bool mysort(int a, int b)
{
    return (abs(a - x) < abs(b - x));
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int  n;
        vector<int>  a;
        cin >> n >> x;
        for(int i=0; i<n; ++i)
        {
            int num;
            cin >> num;
            a.push_back(num);
        }
        stable_sort(a.begin(), a.end(), mysort);
        for(int i=0; i<n; ++i)  
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}