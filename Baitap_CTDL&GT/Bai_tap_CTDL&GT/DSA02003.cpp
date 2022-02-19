#include <bits/stdc++.h>
using namespace std;

int n;
int a[100][1000];
string ans;
vector<string> res;
int xa[] = {1,0};
int ya[] = {0,1};
bool check = true;

void tim(int x, int y)
{
    if(x < n && y < n)
    {
        if(x == n-1 && y == n-1)
        {
            res.push_back(ans);
//           check = false;
        }
        else
        {
            for(int i=0; i<=1; ++i)
            {
                if(x + xa[i] < n && y + ya[i] < n && a[x + xa[i]][y + ya[i]])
                {
                    if(i == 0)
                        ans.push_back('D');
                    else
                        ans.push_back('R');
                    tim(x + xa[i], y + ya[i]);
                    ans.erase(ans.end()-1);
                }
            }
        }
    }
    if(x == 0 && y == 0 && res.empty())
        cout << -1;
    if(x == 0 && y == 0 && !res.empty())
    {
        for(auto i : res)
            cout << i << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ans.clear();
        cin >> n;
        for(int i=0 ;i<n; ++i)
            for(int j = 0; j<n; ++j)
                cin >> a[i][j];
        if(a[0][0] == 0)
            cout << -1;
        else
            tim(0, 0);
        cout << endl;
    }
    return 0;
}