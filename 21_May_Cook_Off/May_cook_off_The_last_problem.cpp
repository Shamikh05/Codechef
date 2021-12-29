#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int in[4][5] = { {1,2,4,7,11},{3,5,8,12,17},{6,9,13,18,24},{10,14,19,25,32} };
	int t;
	cin >> t;
	while(t--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int r = x2-x1+1;
		int c = y2-y1+1;
		int arr[r][c];
		for(int i=0;i<r;i++) {
			for(int j=0;j<c;j++) {
				arr[i][j] = in[i][j];
			}
		}
		int trav = arr[x1-1][y1-1];
		int sum = 0;
		while(trav != arr[x2-1][y2-1]) {
			int a = arr[x1][y1-1];
			int b = arr[x1-1][y1];
			int c = arr[x1-1][y1-2];
			int d = arr[x1-2][y1-1];
			int index = max(a,b,c,d);
			trav = index;
			sum += index;
		}
		cout << sum << endl;
		return 0;
	}
}
