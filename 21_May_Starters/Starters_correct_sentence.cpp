#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int k;
		cin >> k;
		int flag3 = 1;
		for(int i=0;i<k;i++) {
			string str;
			cin >> str;
			int flag1 = 0;
			int flag2 = 0;
			for(int j=0;j<str.size();j++) {
				if(str[j] >= 97 && str[j] <= 109) {
					flag1 = 1;
				}
				else if(str[j] >=78 && str[j] <= 90) {
					flag2 = 1;
				}
				else {
					flag3 = 0;
				}
			}
			if(flag1 && flag2) {
				flag3 = 0;
			}
		}
		if(flag3) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
