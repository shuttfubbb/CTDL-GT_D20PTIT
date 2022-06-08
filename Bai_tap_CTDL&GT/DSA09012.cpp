#include <bits/stdc++.h>
using namespace std;

vector<vector <int> > a (1001, vector<int>(1001, 0));
int v,e;
int chuaxet[1001];
int dinh = 0, canh = 0;


void reinit()
{
    for(int i=1; i<= v; ++i)
    {
        chuaxet[i] = 1;
    }
}


int BFS(int point)
{
    int num = 0;
    queue<int> myqueue;
    myqueue.push(point);
    ++num;
    chuaxet[point] = 0;
    while( !myqueue.empty() )
    {
        int x = myqueue.front();
        myqueue.pop();
        for(int i=1; i<=v; ++i)
        {
            if(a[x][i] == 1 && chuaxet[i])
            {
                myqueue.push(i);
                ++num;
                chuaxet[i] = 0;
            }
        }
    }
    return num;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> v >> e;
        for(int i=0; i<1001; ++i)
            for(int j=0; j<1001; ++j)
                a[i][j] = 0;
        for(int i=1; i<=e; ++i)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        reinit();
        for(int i=1; i<=v; ++i)
        {
            chuaxet[i] = 0;
            int x=1;
            for(x; x<=v; ++x)
                if(x != i)
                    break;
            if(BFS(x) != v-1)
                cout << i << " ";
            reinit();
        }
        cout << endl;
    }
    return 0;
}
