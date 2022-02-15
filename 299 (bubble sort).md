```cpp
#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
// 其實可以不用寫func 直接在 main
int bubble_sort(int data[], int last)
{
	// think 後面保證排好
	int times = 0;
	for (int i = last; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (data[j] > data[j + 1]) {
				swap(data[j], data[j + 1]);
				times ++;
			}
		}
	}
	return times;
}


int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int ia, ib;
		cin >> ia;
		int ary[51];
		for (int i = 0; i < ia; i++)
		{
			cin >> ib;
			ary[i] = ib;
		}
		int times = bubble_sort(ary, ia - 1);
		cout << "Optimal train swapping takes " << times << " swaps." << endl;
	}
	return 0;
}
```
