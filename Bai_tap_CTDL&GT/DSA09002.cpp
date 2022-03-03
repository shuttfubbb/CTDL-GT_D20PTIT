#include <bits/stdc++.h>
using namespace std;

vector<int> xuly(string str)
{
    vector<int> myvt;
    string token;
    stringstream ss(str);
    while (ss >> token) 
    {   
        int num = 0;
        for(int i=0; i<token.length(); ++i)
        {
            num *= 10;
            num += (token[i] - '0');
        }
        myvt.push_back(num);
    }
    return myvt;
}

int main()
{
    int n;
    cin >> n;
    int a[100][100];
    memset(a, 0, sizeof(a));
    for(int i=1; i<=n; ++i)
    {
        scanf("\n");
        string mystr;
        getline(cin, mystr);
        vector<int> myvt = xuly(mystr);
        for(int j=0; j<myvt.size(); ++j)
            a[i][myvt[j]] = 1;
    }
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=n; ++j)
        {
            if(a[i][j])
            {
                cout << i << " " << j << endl;
                a[i][j] = 0;
                a[j][i] = 0;
            }
        }
    }
    return 0;
}