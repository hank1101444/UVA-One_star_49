## 讀到檔案結束 用 cin.eof();
```cpp
#include <iostream>
using namespace std;
#include <string>
#include <vector>
int** p;

class Bot {
public:
	bool init_bot();
	void forward();
	bool check();
	void output();
	void turn(char);
	int x;
	int y;
	bool flag = true;
	char current_face;
};

bool Bot::init_bot() {
	////以真實座標來看
	cin >> x >> y;
	// 外面有違一圈所以要先++
	x++;
	y++;
	cin >> current_face;
	flag = true;
	return !cin.eof();
}

void Bot::turn(char tmp) {
	if (tmp == 'L') {
		if (current_face == 'E')
			current_face = 'N';
		else if (current_face == 'W')
			current_face = 'S';
		else if (current_face == 'N')
			current_face = 'W';
		else
			current_face = 'E';
	}
	else if (tmp == 'R') {
		if (current_face == 'E')
			current_face = 'S';
		else if (current_face == 'W')
			current_face = 'N';
		else if (current_face == 'N')
			current_face = 'E';
		else
			current_face = 'W';
	}
}

void Bot::forward() {
	if (flag) {
		if (current_face == 'E') {
			x++;
			if (!check())
				x--;
		}
		else if (current_face == 'W') {
			x--;
			if (!check())
				x++;
		}
		else if (current_face == 'S') {
			y--;
			if (!check())
				y++;
		}
		else if (current_face == 'N') {
			y++;
			if (!check())
				y--;
		}
	}
}
vector <Bot> dangerous;

bool Bot::check() {

	for (int i = 0; i < dangerous.size(); i++) {
		if (dangerous[i].x == x && dangerous[i].y == y)
			return false;
	}
	//注意
	if (p[y][x] == 1) {
		dangerous.push_back(*this);
		flag = false;
		return false;
	}
	return true;
}

void Bot::output() {
	// 轉成真實座標
	cout << --x << ' ' << --y << ' ' << current_face;
	if (!flag)
		cout << ' ' << "LOST";
	cout << endl;
}


int main() {
	int x, y;
	string s;

	cin >> x >> y;
	// 多圍一圈 + 2
	// x,y 為最右上座標所ˇ以還要再加一是存0用的
	x += 3;
	y += 3;
	p = new int* [y];
	for (int i = 0; i < y; i++)
		p[i] = new int[x]();
	// 1
	for (int j = 0; j < y; j++) {
		for (int i = 0; i < x; i++) {
			if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
				p[j][i] = 1;
		}
	}

	Bot bot;
	//原本為private 但是為了eof
	while (bot.init_bot()) {
		//以真實座標來看
		// 外面有違一圈所以要先++
		//bot.x++;
		//bot.y++;
		///cin >> bot.current_face;
		//bot.flag = true;

		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (bot.flag) {
				if (s[i] == 'F')
					bot.forward();
				else if (s[i] == 'L' || s[i] == 'R')
					bot.turn(s[i]);
				else {
					if (bot.flag)
						bot.current_face = s[i];
					else
						break;
				}
			}
		}
		bot.output();
	}
	for (int i = 0; i < y; i++)
		delete[]p[i];
	delete[]p;
	dangerous.clear();

	return 0;
}
```
