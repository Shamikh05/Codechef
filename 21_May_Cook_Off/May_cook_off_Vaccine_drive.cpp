#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int arr[12];
		for(int i=0;i<12;i++) {
			cin >> arr[i];
		}
		int flag = 0;
		int day = 0;
		int k = arr[0];
		for(int i=11;i>k+1;i--) {
			if(arr[i] > arr[1]) {
				int extra = arr[i] - arr[1];
				arr[i-1] += extra;
				flag++;
				day++;
			}
			if(arr[i] < arr[1]) {
				int rest = arr[1] - arr[i];
				arr[i-1] -= rest;
				flag = 0;
			}
			if(arr[i]==arr[1]) {
				flag=0;
				day++;
			}
		}
		if(flag>=1) {
			cout << day + 1 << " " << day + flag + 1 << endl;
		}
		if(flag==0) {
			cout << day + 1 << " " << day + 1 << endl;
		}
	}
}
