```cpp
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cstdio>
struct z {
	double times = 1;
	string s;
};

bool cmp(z a, z b)
{
	if (a.s != b.s)
		return a.s < b.s;
}

int main()
{
	int n, a;
	string s;
	vector <z> v;
	cin >> n;
	//cin.ignore();
	//cin.ignore();
	// 可以不用cin.ignore() 因為我後面有加條件 讀到空字串 continue
	while (n--)
	{
		char c;
		while (1)
		{
			getline(cin, s);
			if (s == "")
				continue;
			bool exist = false;
			for (int i = 0; i < v.size(); i++)
			{
				if (v[i].s == s)
				{
					exist = true;
					v[i].times++;
					break;
				}
			}
			if (!exist)
			{
				z temp_s;
				temp_s.s = s;
				v.push_back(temp_s);
			}
			//放最後一行 因為她會叫你馬上輸入
			
			if (cin.peek() == '\n' || cin.peek() == EOF)
				break;
		}
		int count = 0;
		for (int i = 0; i < v.size(); i++)
			count += v[i].times;
		for (int i = 0; i < v.size(); i++)
			v[i].times = v[i].times / count * 100;
		sort(v.begin(), v.end(), cmp);
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i].s << ' ' << fixed << setprecision(4) << v[i].times << endl;
		}
		v.clear();
		// 最後一組資料不要有 endl;
		if (cin.peek() == EOF)
			break;
		cout << "\n";
	}
	return 0;
}
```
