#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int vs[1001];
int v, e;

int deg(int node)
{
	int cnt = 0;
	for(int i=1; i<=v; ++i)
		if(a[node][i] == 1)
			++cnt;
	if(cnt % 2 == 0)
		return 1;
	return 0;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int check = 0;
		memset(a, 0, sizeof(a));
		memset(vs, 0, sizeof(vs));
		cin >> v >> e;
		for(int i=1; i<=e; ++i)
		{
			int x, y;
			cin >> x >> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}
		int cnt = 0;
		for(int i=1; i<=v; ++i)
			cnt += deg(i);
		if(v-cnt == 2)
			check = 1;
		else if(cnt == v)
			check = 2;
		cout << check << endl;
	}
	return 0;
}

