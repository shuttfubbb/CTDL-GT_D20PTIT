#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> a,b,c;
        int n;
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            int num;
            cin >> num;
            if(num == 0)
                a.push_back(num);
            else if(num == 1)
                b.push_back(num);
            else
                c.push_back(num);
        }
        a.insert(a.end(), b.begin(), b.end());
        a.insert(a.end(), c.begin(), c.end());
        for(auto i : a)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}