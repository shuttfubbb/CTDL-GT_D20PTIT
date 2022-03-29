#include <bits/stdc++.h>
using namespace std;

string mystr;
int d;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        mystr.clear();
        cin >> d >> mystr;
        int check[1000];
        memset(check, 0, sizeof(check));
        int tmp = 0;
        for(auto it : mystr)
        {
            ++check[it];
            tmp = max(tmp, check[it]);
        }
        if(tmp > (mystr.size() + d - 1) / d)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}