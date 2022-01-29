![](https://github.com/hank1101444/UVA-one-stat-49-/blob/main/1.png)
![](https://github.com/hank1101444/photo/blob/main/129.png)
## string.find() 找不到會回傳 -1 找到回傳元素位置
## set 用 set.count() 找到回傳 1 沒有傳0

```cpp
#include <iostream>
using namespace std;
#include <string>
int main() {
    int sum, mx, temp;
    string s;
    while (getline(cin, s)) {
        sum = 0;
        mx = 1;
        int i;

        string temp = "0123456789"
           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
        for (int i = 0; i < s.size(); i++) {
            // string.find() 找不到會回傳 -1 找到回傳元素位置
            // set 用 set.count() 找到回傳 1 沒有傳0
            if (temp.find(s[i]) == -1) {
                s.erase(i, i + 1); // begin()+i,begin+i+1
            }
        }
        // 要再寫一個for 因為會刪除元素
        for (int i = 0; i < s.size(); i++) {
            sum += temp.find(s[i]);
            if (temp.find(s[i]) > mx) {
                mx = temp.find(s[i]);
            }
        }

        for (i = mx; i < 62; i++)
            if (!(sum % i)) {
                cout << i + 1 << "\n";
                break;
            }

        if (i == 62)
            cout << "such number is impossible!\n";
    }

    return 0;
}
```
