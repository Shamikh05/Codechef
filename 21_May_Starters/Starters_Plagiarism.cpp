#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, k;
		cin >> n >> m >> k;
		int arr[k+1];
		arr[0] = 0;
		set<int> result;
		for(int i=1;i<=k;i++) {
			int num;
			cin >> num;
			arr[i] = num;
			if(arr[i]>=1 && arr[i]<=n && count(arr+1,arr+i+1,arr[i])>1) {
				result.insert(num);
			}
		}
		cout << result.size() << " ";
		for(auto it : result) {
			cout << it << " ";
		}
		cout << endl;
	}
	return 0;
}
