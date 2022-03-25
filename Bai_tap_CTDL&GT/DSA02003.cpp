#include <bits/stdc++.h>
using namespace std;

int a[100][100];
int x[] = {1, 0};
int y[] = {0, 1};
char c[] = "DR";
int n;
vector<char> ans;
int check;

void in()
{
    ++check;
    for(auto it : ans)
        cout << it;
    cout << " ";
}

void dequy(int xx, int yy)
{   
    for(int i=0; i<= 1; ++i)
    {
        if(a[xx + x[i]][yy + y[i]])
        {
            ans.push_back(c[i]);
            if(xx + x[i] == n && yy + y[i] == n)
                in();
            else
                dequy(xx + x[i], yy + y[i]);
            ans.pop_back();
        }
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(a, 0, sizeof(a));
        cin >> n;
        for(int i=1; i<=n; ++i)
            for(int j=1; j<=n; ++j)
                cin >> a[i][j];
        check = 0;
        ans.clear();
        if(a[1][1] == 0)
            cout << -1;
        else
        {
            dequy(1, 1);
            if(!check)
                cout << -1;
        }
        cout << endl;
    }
    return 0;
}