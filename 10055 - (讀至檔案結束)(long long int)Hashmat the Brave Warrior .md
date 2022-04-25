# question : The input numbers are not greater than 2^32. Input is terminated by ‘End of File’
# 2. 注意2^32可能為答案 所以要long long int
## 1. end of file 用 ^c


```
# include<iostream>
using namespace std;
#include<cstdlib>

int main() {


	long long int x, y;				// modify 
	while (cin >> x >> y) {
		long int ans = 0;			// modify
		ans = abs(x - y);
		cout << ans << endl;
	}




	return 0;
}
```
