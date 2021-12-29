#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++) {
		int n;
		cin >> n;
		int last = n;
		while(n!=0) {
			last = n-1;
			n = n & (n-1);
			//count++;
		}
		cout << last << endl;
	}
	return 0;
}
