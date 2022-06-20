#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	Node* left;
	Node* right;
};

typedef struct Node* node;

node makeNode(char x)
{
	node tmp = new Node();
	tmp->data = x;
	tmp->left = NULL;
	tmp->right = NULL;
	return tmp;
}

void inOrder(node a)
{
	if(a!=NULL)
	{
		inOrder(a->left);
		cout << a->data ;
		inOrder(a->right);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		scanf("\n");
		string str;
		getline(cin, str);
		stack<node> myst;
		for(int i=0; i<str.size();++i)
		{
			char it = str[i];
			if(it != '+' && it != '-' && it != '*' && it !='/' )
			{
				node tmp = makeNode(it);
				myst.push(tmp);
			}
			else
			{
				node tmp = makeNode(it);
				
				tmp->right= myst.top();
				myst.pop();
				
				tmp->left = myst.top();
				myst.pop();
				
				myst.push(tmp);
			}
		}
		node mytree = myst.top();
		inOrder(mytree);
		cout << endl;
	}
	return 0;
}
