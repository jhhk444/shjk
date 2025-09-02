/*
#include <iostream>
#include <vector>
using namespace std;


int js(int n)
{
	int n1 = n;
	int sum = 1;
	while (n-- && n != 0)
	{
		sum *= n;
	}
	return sum * n1;
}

int main()
{
	int n = 0;
	cin >> n;
	if (n == 0)
	{
		cout << "1" << endl;
		return 0;
	}
	int sum1 = js(n);
	cout << sum1 << endl;
	return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

struct jgt
{
	int left;
	int right;
	int gs;
};



int main()
{
	int n = 0;
	cin >> n;
	int m = 0;
	cin >> m;
	vector<int>a(n);
	vector<jgt>b;

	for (int i = 0;i < n;i++)
	{
		int mm = 0;
		cin >> mm;
		if (mm >= 0)
		{
			a[i] = mm;
		}
		else
		{
			a[i] = -mm;
		}
	}

	int left = 0;
	while (left < n - 1)
	{
		
	}

}
*/

/*
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n = 0, m = 0;
	cin >> n >> m;
	int n1 = n + 1;
	vector<string>a;
	
	while (n1--)
	{
		string s;
		cin >> s;
		int js = 0;
		for (int i = 0;i < s.size();i++)
		{
			
			if (s[i] == 'S')
			{
				js++;
			}
			else
			{
				js--;
			}

			if (js > m || js < 0)
			{
				cout << "NO" << endl;
				return 0;
			}
		}

		if (js != 0)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
		js = 0;
	}


	for (auto& it : a)
	{
		cout << it << " " << endl;
	}
	return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n = 0, m = 0;
	cin >> n >> m;
	vector<string>a(n);
	for (int i = 0;i < n;i++)
	{
		string s;
		cin >> s;
		int js = 0;
		int js1 = 0;
		for (int i = 0;i < s.size();i++)
		{

			if (s[i] == 'S')
			{
				js++;
			}
			else
			{
				js--;
			}

			if (js > m || js < 0)
			{
				js1 = 1;
				continue;
			}
		}

		if (js != 0 || js1==1)
		{
			cout << "NO" << endl;
		}
		else if(js==0 && js1==0)
		{
			cout << "YES" << endl;
		}
		js = 0;
	
	}
	return 0;
}
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	
	int n = 0;
	cin >> n;
	stack<int>s1;
	stack<int>s2;
	while (n--)
	{
		char a;
		cin >> a;
		if (a == 'I')
		{
			int b = 0;
			cin >> b;
			s1.push(b);
		}
		else
		{
			if (s2.size()==0 && s1.size()!=0)
			{
				while (s1.size()!=0)
				{
					int c = s1.top();
					s2.push(c);
					s1.pop();
				}
				cout << s2.top() <<" "<< s2.size() * 2 + 1 << endl;
				s2.pop();
			}
			else if (s2.size()==0 && s1.size()==0)
			{
				cout << "ERROR" << endl;
			}
			else
			{
				cout << s2.top() << " 1" << endl;
				s2.pop();
			}
		}
	}
	return 0;
}