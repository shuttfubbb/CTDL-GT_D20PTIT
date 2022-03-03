#include <bits/stdc++.h>
using namespace std;

int myarr[1005][1005];
int check[1005];
vector<int> ans;
void duyet(int u)
{
    ans.push_back(u);
    check[u] = 0;
    for(int i=0; i<1005; ++i)
    {
        if(myarr[u][i] && check[i])
        {
            myarr[u][i] = 0;
            myarr[i][u] = 0;
            duyet(i);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ans.clear();
        memset(check, 1, sizeof(check));
        int V, E, u;
        cin >> V >> E >> u;
        memset(myarr, 0, sizeof(myarr));
        for(int i=0; i<E; ++i)
        {
            int a, b;
            cin >> a >> b;
            myarr[a][b] = 1;
            myarr[b][a] = 1;
        }
        duyet(u);
        for(auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}