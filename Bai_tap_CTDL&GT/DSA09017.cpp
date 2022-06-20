#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int vs[1001];
int v, e;

int DFS(int u)
{
	int cnt = 1;
	stack<int> mys;
	mys.push(u);
	vs[u] = 1;
	while(!mys.empty())
	{
		int tmp = mys.top();
		mys.pop();
		for(int i=1; i<=v; ++i)
		{
			if(a[tmp][i] == 1 && vs[i] == 0)
			{
				++cnt;
				vs[i] = 1;
				mys.push(i);
			}
		}
	}
	return cnt;
}




int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		memset(vs, 0, sizeof(vs));
		int n;
		cin >> n;
		set<int> myset;
		for(int i=1; i<n; ++i)
		{
			int x, y;
			cin >> x >> y;
			myset.insert(x);
			myset.insert(y);
			a[x][y] = 1;
			a[y][x] = 1;
		}
		v = myset.size();
		int cnt = 0;
		for(int i=1; i<=v; ++i)
		{
			for(int j=i; j<=v; ++j)
			{
				memset(vs, 0, sizeof(vs));
				if(a[i][j] == 1)
				{
					a[i][j] = 0;
					if(DFS(1) != v)
						++cnt;	
					a[i][j] = 1;
				}
			}
		}
		if(cnt == v-1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
 	return 0;
}

