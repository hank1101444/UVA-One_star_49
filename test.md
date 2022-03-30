```cpp
#include <iostream>
using namespace std;
#include <cmath>
int realsum = 0;

int check(int tmp) {
	int ans = 0;
	int n = 0;

	while (realsum <= tmp) {
		n++;
		realsum = (n / 2)* (1 + n);
	}
	return n;
}

int main() {
	int few;
	while (cin >> few) {
		realsum = 0;
		if (!few)
			break;
		int times = check(few);
		//bool flag = true;
		cout << realsum - few << ' ' << times << endl;
	}
	return 0;
}
```
