![](https://github.com/hank1101444/photo/blob/main/11332.png)


```cpp
#include <iostream>
using namespace std;
int mod(int a);

int main() {
	int num;
	while (cin >> num) {
		if (num == 0)
			break;
		int sum = num;
		while (sum / 10 != 0) {
			sum = mod(sum);
		}
		cout << sum << endl;
	}
	return 0;
}

int mod(int a) {

	int sum = 0;
	while (a != 0) {
		sum += a % 10;
		a /= 10;
	}

	return sum;
}

```
