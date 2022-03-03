#include <bits/stdc++.h>
using namespace std;

int myarr[1005][1005];
int check[1005];
vector<int> ans;

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
        queue<int> mysk;
        mysk.push(u);
        while(!mysk.empty())
        {
            int num = mysk.front();
            check[num] = 0;
            ans.push_back(num);
            mysk.pop();
            for(int i=0; i<1005; ++i)
            {
                if(myarr[num][i] && check[i])
                {
                    myarr[num][i] = 0;
                    myarr[num][i] = 0;
                    mysk.push(i);
                    check[i] = 0;
                }
            }
        }
        for(auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}