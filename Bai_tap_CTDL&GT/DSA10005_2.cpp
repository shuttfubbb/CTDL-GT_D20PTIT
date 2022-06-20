#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int vs[1001];
int v, e;
int duong[1001];
int am[1001];


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int check = 0;
		memset(a, 0, sizeof(a));
		memset(vs, 0, sizeof(vs));
		memset(duong, 0, sizeof(duong));
		memset(am, 0, sizeof(am));
		cin >> v >> e;
		for(int i=1; i<=e; ++i)
		{
			int x, y;
			cin >> x >> y;
			++duong[x];
			++am[y];
			a[x][y] = 1;
		}
		int cnt = 0;
		for(int i=1; i<=v; ++i)
		{
			if(abs(duong[i] - am[i]) == 0)
				++cnt;
		}		
		if(cnt == v)
			check = 1;
		cout << check << endl;
	}
	return 0;
}
