## 題目還是只有一句話 不能看成兩句話ex 千個一千萬(3 kuti 16 lakh kuti 70 hajar)
```cpp
// 題目還是只有一句話 不能看成兩句話ex 千個一千萬(3 kuti 16 lakh kuti 70 hajar)
# include <iostream>
using namespace std;
void split(long long a);
# include <iomanip>

int main() {

	long long a;
	int count = 0;
	while (cin >> a) {

		count++;
		//題目有說with four digits adjustment
		cout << setw(4) << count << ".";  //addend
		if (a == 0) {
			cout << ' ' << a << endl;
			continue;
		}
		split(a);
		cout << endl;
	}
	return 0;
}
void split(long long a) {
	if (a >= 10000000) {
		//先得到商
		split(a / 10000000);
		// 再換成餘數
		a %= 10000000;
		cout << " kuti";
	}

	if (a >= 100000) {
		split(a / 100000);
		a %= 100000;
		cout << " lakh";
	}

	if (a >= 1000) {
		split(a / 1000);
		a %= 1000;
		cout << " hajar";
	}

	if (a >= 100) {
		split(a / 100);
		a %= 100;
		cout << " shata";
	}
	// 為0時不要輸出 
	//1000000000
	// 如果前面剛好整除則 kuti 會剛好沒細數 像是 600 個一億
	// think 台幣換算
	// 1. 1 shata kuti
	if (a)    // addend
		cout << ' ' << a;
}
```
