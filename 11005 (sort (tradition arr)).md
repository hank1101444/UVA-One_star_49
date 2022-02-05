```cpp
#include <iostream>
using namespace std;
#include <algorithm>
int main() {

	int n, count = 1;
	cin >> n;
	while (n--) {
		cout << "Case " << count << ":" << endl;
		int ink[36] = {};
		int temp = 0;
		// 輸入 ink 0~35
		for (int i = 0; i < 36; i++) {

			cin >> temp;
			ink[i] = temp;
		}
		// 只用2~36
		int base[37] = {};
		int times = 0, ans = 0;
		cin >> times;
		while (times--)
		{
			int num;
			cin >> num;
			// 算進位數
			for (int i = 2; i < 37; i++) {
				temp = num;
				ans = 0;
				while (temp != 0) {
					int j = temp % i;
					temp /= i;
					ans += ink[j];
				}
				base[i] = ans;
			}
			int base_temp[35];
			for (int i = 2, flag = 0; i < 37; i++, flag++) {
				base_temp[flag] = base[i];
			}
			// sort 放名字, 第二個是加他的大小
			sort(base_temp, base_temp + 35);
			int min = base_temp[0];
			cout << "Cheapest base(s) for number " << num << ":";
			for (int i = 2; i < 37; i++) {
				if (min == base[i]) {
					cout << ' ' << i;
				}
			}
			cout << endl;
		}
		count++;
		// n 輸入2 時會跑1,0 所以我最後一個不要endl就要寫>= 1
		if (n >= 1)
		{
			cout << endl;
		}
	}

	return 0;
}
```
