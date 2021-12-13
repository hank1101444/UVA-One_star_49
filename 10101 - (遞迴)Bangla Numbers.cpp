# include <iostream>
using namespace std;
void split(long long a);
# include <iomanip>

int main() {

	long long a;
	int count = 0;
	while (cin >> a) {

		count++;
		
		cout << setw(4) << count << ".";
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
		split(a / 10000000);
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

	if (a)
		cout << ' ' << a;
}
