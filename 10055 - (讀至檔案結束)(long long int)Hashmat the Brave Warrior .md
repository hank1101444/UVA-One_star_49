# question : The input numbers are not greater than 2^32. Input is terminated by ‘End of File’
#  注意2^32可能為答案 所以要long long int
## 1. end of file 用 ^c


```cpp
#include <iostream>
using namespace std;
#include <cmath>
int main() {
	long long int a, b,ans;
	while (cin >> a >> b) {
		ans = abs(a - b);
		cout << ans << endl;
	}

	return 0;
}
```
