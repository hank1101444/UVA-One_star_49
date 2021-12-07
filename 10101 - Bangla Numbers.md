```
# include <iostream>
using namespace std;
void kuti(long long& a);
void lakh(long long& a);
void hajar(long long& a);
void shata(long long& a);
void implement(long long& a);

int main() {

	long long a;
	int count = 0;
	while (cin >> a) {
		
		count++;
		cout << count << ".";

		if (a / 10000000 >= 100) {
			long long temp = a / 10000000;
			long long temp2 = a % 1000000000;
			implement(temp);
			implement(temp2);
			if (temp2 == 0) {
				cout << endl;
				continue;
			}
				
			cout << ' ' << temp2;
		}
		else {
			implement(a);
			if (a == 0) {
				cout << endl;
				continue;
			}
				
			cout << ' ' << a;
		}

		cout << endl;
	}

		
	return 0;
}

void implement(long long& a) {
	if (a % 10000000 != a)
		kuti(a);

	if (a % 100000 != a)
		lakh(a);
	if (a % 1000 != a)
		hajar(a);

	if (a % 100 != a)
		shata(a);

}


void kuti(long long& a) {

	int temp = 0;
	temp = a / 10000000;
	cout << ' ' << temp << " kuti";
	a %= 10000000;
}

void lakh(long long& a) {
	int temp = 0;
	temp = a / 100000;
	cout << ' ' << temp << " lakh";
	a %= 100000;
}

void hajar(long long& a) {
	int temp = 0;
	temp = a / 1000;
	cout << ' ' << temp<< " hajar";
	a %= 1000;
}

void shata(long long& a) {
	int temp = 0;
	temp = a / 100;
	cout << ' ' << temp << " shata";
	a %= 100;
}


```
