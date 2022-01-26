## 不要使用stoi 會出事
## 要long long 就要全部long long
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int astoi(string s) {
    int t = 1;
    if (s[0] == '-') {
        t = -1;
        s.erase(s.begin());
    }
    int out = 0;
    for (int i = 0; i < s.size(); i++) {
        out *= 10;
        out += s[i] - '0';
    }
    out *= t;
       //cout<<out;
    return out;
}
int main()
{
    int x;
    vector<long long int> v;
    while (cin >> x)
    {
        cin.ignore(); // add
        string a;
        getline(cin, a);
        //reverse(a.begin(), a.end());
        string temp = "";
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != ' ') {
                temp += a[i];
            }
            else {
                v.push_back(astoi(temp));
                temp = "";
            }
        }
        v.push_back(astoi(temp));
        v.pop_back();
        reverse(v.begin(), v.end());
        long long int ans = 0;
        long long int mul = 1;
        for (long long int i = 0; i < v.size(); i++)
        {
            //ans += v[i] * i * pow(x, i - 1);
            ans += v[i] * (i + 1) * mul;
            mul *= x;
        }
        cout << ans << endl;
        v.clear();
    }


    return 0;
}
```
