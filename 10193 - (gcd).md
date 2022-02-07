# gcd 你傳入的數字不用管大小 他第一步都會先幫你轉第一個數字大 所以不用管大小

##  question : For instance,for S1 = 11011(27) and S2 = 11000(24), we can have L = 11(3) such that S1 and S2 are both made only of L
```cpp
#include <iostream>
using namespace std;
#include <cmath>
#include <string>
#include <algorithm>
bool love(int a, int b)
{
	// divisor :a != 0, dividend :b ,(b%a)
	// 寫出來每一步的關係式可以發現被除數b下一次永遠是這次的a
	// 而a每次的變化都是餘數
	if (a == 0)
	{
		return true;
	}
	else if (a == 1)
	{
		return false;
	}
	love(b%a,a);

}

int main()
{
	int n, flag = 1;
	cin >> n;
	while (n--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		reverse(s1.begin(), s1.end());
		reverse(s2.begin(), s2.end());
		int int1 = 0, int2 = 0;
		for (int i = 0; i < s1.size(); i++)
		{
			int1 += pow(2, i) * (s1[i] - '0');
		}
		for (int i = 0; i < s2.size(); i++)
		{
			int2 += pow(2, i) * (s2[i] - '0');
		}
		if (love(int1, int2))
		{
			cout << "Pair #" << flag << ": All you need is love!" << endl;
		}
		else
		{
			cout << "Pair #" << flag << ": Love is not all you need!" << endl;
		}
		flag++;
	}
	return 0;
}
```
