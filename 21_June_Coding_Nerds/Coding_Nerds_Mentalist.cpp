#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
	string s1;
	cin >> s1;
	vector<int> value;
	//vector<char> v2;
	for(int i=0;i<s1.length();i++) {
		char ch = s1[i];
		//v2.push_back(ch);
		int n = int(ch);
		n = n - 97;
		value.push_back(26 - n);
	}
	//int result = 0;
	int jane = value[s1.length()-1];
	//cout << jane << endl;
	s1.erase(s1.begin() + s1.length() - 1);
	while(s1.length()) {
		s1.erase(s1.begin());
		int pick1 = value[];
		//cout << pick1 << endl;
		int pick2 = value[s1.length()-1];
		//cout << pick2 << endl;
		if(pick1 > pick2){
			jane += pick1;
			s1.erase(s1.begin());
		}
		else{
			jane += pick2;
			s1.erase(s1.begin() + s1.length() - 1);
		}
	}
	//cout << s1.length();
	cout << jane << endl;
	return 0;
}
