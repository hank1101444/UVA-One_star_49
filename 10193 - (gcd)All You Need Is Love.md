# gcd 你傳入的數字不用管大小 他第一步都會先幫你轉第一個數字大 所以不用管大小

##  question : For instance,for S1 = 11011(27) and S2 = 11000(24), we can have L = 11(3) such that S1 and S2 are both made only of L
```
# include <iostream>
using namespace std;
// # include <vector>
# include <cmath>
#include <cstring>
int binToDec(int ary[], int arySize);
int gcd(int n1, int n2);

//找s1 s2 的最大公因數
int main() {
	int n;
	int count = 1;
	cin >> n;
	while(1){
		
		char A[31], B[31];
		int a[31], b[31];

		cin >> A;
		cin >> B;
		int asize = strlen(A);
		int bsize = strlen(B);


		for (int i = 0; i < asize; i++) {
			a[i] = A[asize - 1 - i] - '0';
		}

		for (int i = 0; i < bsize; i++) {
			b[i] = B[bsize - 1 - i] - '0';
		}

		int dec1, dec2, gcdnum;

		dec1 = binToDec(a, asize);
		dec2 = binToDec(b, bsize);

		gcdnum = gcd(dec1, dec2);

		////dec1 > dec2
		//if (dec1 < dec2) {
		//	int temp = dec2;
		//	dec2 = dec1;
		//	dec1 = temp;
		//}


		if (gcdnum != 1)
			cout << "Pair #" << count << ": All you need is love!" << endl;

		else
			cout << "Pair #" << count << ": Love is not all you need!" << endl;
		count++;
		if (count > n)
			break;
	}
	return 0;
}




int binToDec(int ary[], int arySize) {

	int ans = 0;
	for (int i = 0; i < arySize; i++) {
		ans += pow(2, i) * ary[i];
	}

	return ans;
}


int gcd(int n1, int n2){

	if (n2 == 0)
		return n1;

	return gcd(n2, n1 % n2);
}
```
