#include <bits/stdc++.h>
using namespace std;

const int MD = 1e9 + 7;
vector<vector<int> > C (1005, vector<int> (1005, 1));

void init()
{
    for(int i=2; i<= 1001; ++i)
    {
        for(int j=1; j<i; ++j)
        {
            C[i][j] = C[i-1][j-1] + C[i-1][j];
            C[i][j] %= MD;
        }
    }
}

void test()
{
    for(int i=0; i<10; ++i)
    {
        for(int j=0; j<=i; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    init();
    //test();
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        cout << C[n][k] << endl;
    }
    return 0;
}