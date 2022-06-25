#include <bits/stdc++.h>
using namespace std;

int num(char c)
{
	return c-'0';
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		stack<int> myst;
		scanf("\n");
		getline(cin, str);
		for(auto c : str)
		{
			if(c >= '0' && c <= '9')
				myst.push(num(c));
			else if(c == '+')
			{
				int a = myst.top(); myst.pop();
				myst.top() += a;
			}
			else if(c == '-')
			{
				int a = myst.top(); myst.pop();
				myst.top() -= a;
			}
			else if(c == '*')
			{
				int a = myst.top(); myst.pop();
				myst.top() *= a;
			}
			else if(c == '/')
			{
				int a = myst.top(); myst.pop();
				myst.top() /= a;
			}
		}
		cout << myst.top() << endl;
	}
 	return 0;
}

