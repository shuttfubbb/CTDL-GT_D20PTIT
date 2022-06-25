#include <bits/stdc++.h>
using namespace std;

int a[100000];

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		int n;
		cin >> n;
		for(int i=0; i<n; ++i)
			cin >> a[i];
		stack<int> myst;
		vector <int> ans;
		ans.push_back(-1);
		for(int i=n-1; i>0; --i)
		{
			myst.push(a[i]);
			while(!myst.empty() && myst.top() <= a[i-1])
			{
				myst.pop();
			}
			if(myst.empty())
				ans.push_back(-1);
			else
				ans.push_back(myst.top());
		}
		for(int i=ans.size()-1; i>=0; --i)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}
 	return 0;
}

