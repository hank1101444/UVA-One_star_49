
# 考 (sort)(中位數)

## 距離題目先畫圖
## key : 要找中位數當他的家 而非平均 奇數時只有中間該值吻合 偶數有n.?到n+1都可為最短距離

```
#include<iostream>
using namespace std;
#include <vector>
#include<cstdlib>   
void inssort(vector <int> &num);




// key : 要找中位數當他的家 而非平均 奇數時只有中間該值吻合 偶數有n.?到n+1都可為最短距離
int main() {

	vector <int> num;
	int numt;
	cin >> numt;

	while (numt--) {
	
		int nor;
		cin >> nor;
		num.clear();     // add

		while (nor--) {
			int street;
			cin >> street;
			num.push_back(street);
		}
		
		inssort(num);

		
		//count /= num.size();   //delete  切記不能用除法
		
		// 找到中位數
		int home = num[num.size()/ 2];

		int ans = 0;
		for (int i = 0; i < num.size(); i++) {
			
			ans += abs(home - num[i]);
		}
		cout << ans << endl;
	}

	return 0;
}



void inssort(vector <int> &num) {       //記得加&

	for (int i = 1; i < num.size(); i++) {
		int insert = num[i];
		int last = i;
		while (last > 0 && num[last - 1] > insert) {   //modify
			num[last] = num[last - 1];
			last--;
		}
		num[last] = insert;
	}
}
```
# sort(v.begin(), v.end());  (vector)
# sort(begin(arr), end(arr)); (傳統陣列)


```
#include<iostream>
using namespace std;
#include <vector>
#include<cstdlib>
#include <algorithm>


int main() {

	vector <int> num;
	int numt;
	cin >> numt;

	while (numt--) {
	
		int nor;
		cin >> nor;
		num.clear();    

		while (nor--) {
			int street;
			cin >> street;
			num.push_back(street);
		}
		
		// 快解
		sort(num.begin(), num.end());  
		

		int home = num[num.size()/ 2];

		int ans = 0;
		for (int i = 0; i < num.size(); i++) {
			
			ans += abs(home - num[i]);
		}
		cout << ans << endl;
	}

	return 0;
}



```
