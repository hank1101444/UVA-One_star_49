![](https://github.com/hank1101444/photo/blob/main/1291.png)
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
            if (temp.find(s[i]) == -1) {
                s.erase(i, i + 1); // begin()+i,begin+i+1
            }
        }

        for (int i = 0; i < s.size(); i++) {
            sum += temp.find(s[i]);
            if (temp.find(s[i]) > mx) {
                mx = temp.find(s[i]);
            }
        }
        // 將i視為最小的基底數字 所以最多只能到62
        for (i = mx+1; i < 63; i++)
            if (!(sum % (i-1))) {
                cout << i << "\n";
                break;
            }

        if (i == 63)
            cout << "such number is impossible!\n";
    }

    return 0;
}
```
