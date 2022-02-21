```cpp
#include <iostream>
using namespace std;
#include <string>
#include <map>
#include <vector>
int main()
{
	int n;
	map <int, vector <int>> m;
	m = {
	{1,{4,3,2,5}},
	{2,{4,3,6,1}},
	{3,{6,1,5,2}},
	{4,{1,6,5,2}},
	{5,{4,3,1,6}},
	{6,{4,3,5,2}}
	};
	while (cin >> n && n != 0)
	{
		int down = 6;
		for (int i = 0; i < n; i++)
		{
			string s;
			int flag;
			cin >> s;
			if (s == "east")
				flag = 0;
			else if (s == "west")
				flag = 1;
			else if (s == "south")
				flag = 2;
			else if (s == "north")
				flag = 3;
			down = m[down][flag];
		}
		cout << 7-down << endl;
	}

	return 0;
}
```
