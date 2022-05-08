# 使用recursive 注意每次都要回傳


```cpp
#include <iostream>
using namespace std;


int cyclelength(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n % 2) {
		return 1 + cyclelength(3 * n + 1);
	}
	else {
		return 1 + cyclelength(n / 2);
	}
}


int main() {

	int a, b;
	while (cin >> a >> b) {
		int max_ = 0;
		cout << a << ' ' << b << ' ';
		if (a > b) {
			int tmp = a;
			a = b;
			b = tmp;
		}

		for (int i = a; i <= b; i++) {
			int tmp = cyclelength(i);
			if (tmp > max_)
				max_ = tmp;
		}

		cout << max_ << endl;
	}
	return 0;
}
```
## 錯誤
```cpp
int num;
int ans( int a) {
	num++;
	if (a == 1)
		return num;
	else {
		if (a % 2 == 1)
			ans(3 * a + 1);
		else
			ans(a /= 2);
	}
}
```
```cpp
#include <iostream>
using namespace std;




int main() {

	 int a, b;
	while (cin >> a >> b) {
		int max_ = 0;
		cout << a << ' ' << b << ' ';
		if (a > b) {
			int tmp = a;
			a = b;
			b = tmp;
		}

		for (int i = a; i <= b; i++) {
			num = 1;
			//int tmp = ans(i);
			int tmp = i;
			while (1) {
				if (tmp == 1)
					break;
				if (tmp % 2 == 1) {
					tmp = 3 * tmp + 1;
				}
				else tmp /= 2;
				num++;
			}

			if (num > max_)
				max_ = num;
		}

		cout << max_ << endl;
	}
	return 0;
}
```


```cpp
#include <iostream>
using namespace std;

// returns the maximum cycle-length over all integers
// between and including first and last
int maxCycleLength(int first, int last);

int cycleLength(int n); // returns the cycle-length of n

int main()
{
    int i, j;
    while (cin >> i >> j)
    {
        cout << i << ' ' << j << ' ';

        if (i > j)
        {
            int buf = i;
            i = j;
            j = buf;
        }

        cout << maxCycleLength(i, j) << endl;
    }
}
// 先寫出邊際條件
// 不要急著在給空間的同時馬上比大小
// 給空間, 了解每次要回傳的東東是什
// 問題是出在我希望記起上一次的回傳值 又想同時比大小
// 空間搞定後 程式重 returnNum 那行開始接著跑
int maxCycleLength(int first, int last)
{
    
    if (first > last)
        return 0;

    else {
        // 先給空間重後面找起
        // 第一個return 會是0 為大於last 的狀況

        int returnNum = maxCycleLength(first + 1, last);
        //找出當前的
        int nowNum = cycleLength(first);
        if (returnNum > nowNum)
            return returnNum;
        else
            return nowNum;
    }
}

int cycleLength(int n)
{
    if (n == 1) {
        return 1;
    }

    else if (n % 2 == 1) {
        n = 3 * n + 1;
    }
    else {
        n /= 2;
    }
    // 也是先給出空間 最後就一直執行第 最後一行
    return 1 + cycleLength(n);


}

```
