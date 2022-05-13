```cpp
#include <iostream>
using namespace std;


int ans(int a) {
	int tmp =0 ;
	while (a !=0) {
		tmp += a % 10;
		a /= 10;
	}
	return tmp;
}

int main() {
	int n;
	while (cin >> n) {
		if (n == 0)
			break;
		while (ans(n) >=10) {
			n = ans(n);
		}
		cout << ans(n) << endl;	
	}
	return 0;
}
```
