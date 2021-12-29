#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int D, d , a ,b ,c;
		cin >> D >> d >> a >> b >> c;
		int result = D*d;
		if(result < 10) {
			cout << 0 << endl;
		}
		if(result >= 10 && result < 21) {
			cout << a << endl;
		}
		if(result >= 21 && result < 42) {
			cout << b << endl;
		}
		if(result > 42) {
			cout << c << endl;
		}
	}
	return 0;
}
