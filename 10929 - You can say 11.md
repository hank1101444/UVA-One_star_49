# 判斷可否被11整除看 奇數位相加 減掉 偶數位相加 再除11

```
# include <iostream>
using namespace std;
# include <vector>
# include <string>
# include <cstdlib>

int main() {
	string a;
	
	int b[1000] = {};

	while (cin >> a) {


		if (a == "0")
			break;


		for (int i = 0; i < a.size(); i++) {
			b[i] = a[i] - '0';
		}

		int bSize = a.size();

		int odd = 0, even = 0;

		for (int i = 0; i < bSize; i++) {
			if ((i + 1) % 2 == 1)
				odd += b[i];
			else
				even += b[i];
		}

		int ans = abs(odd - even);
		
		if (ans % 11 == 0)
			cout << a << " is a multiple of 11." << endl;

		else
			cout << a << " is not a multiple of 11." << endl;
	}
	return 0;
}
```
