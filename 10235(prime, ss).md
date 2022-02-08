```cpp
#include <iostream>
using namespace std;
#include <cmath>
#include <string>
#include <sstream>
#include <algorithm>
bool pri(int n)
{
	int a = sqrt(n);
	bool flag = true;
	for (int i = 2; i <= a; i++)
	{
		if (n % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

int main()
{
	string s;
	stringstream ss;
	while (cin >> s)
	{
		ss << s;
		int a,b;
		ss >> a;    // modify  (x) a >> ss;
		if (pri(a))
		{
			reverse(s.begin(), s.end());
			ss.str("");
			ss.clear();
			ss << s;
			ss >> b;
			if (pri(b) && a != b)
			{
				cout << a << " is emirp." << endl;
			}
			else
			{
				cout << a << " is prime." << endl;
			}
		}

		else
		{
			cout << a << " is not prime." << endl;
		}
		ss.str("");
		ss.clear();

	}
	return 0;
}
```
