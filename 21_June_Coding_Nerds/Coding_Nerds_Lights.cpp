#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	bool arr[n];
	for(int i=0;i<n;i++) {
		cin >> arr[i];
		//m[arr[i]] = i;
	}
	int count = 0;
	for(int i=0;i<n;i++) {
		if(arr[i]==0) {
			count++;
			arr[i] = 1;
			for(int j=i+1;j<n;j++) {
				if(arr[j]==1) {
					arr[j] = 0;
				}
				else {
					arr[j] = 1;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}
