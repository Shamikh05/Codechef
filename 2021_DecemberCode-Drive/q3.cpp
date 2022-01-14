#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {

        int t;
        cin >> t;

        int n;

        while(t--) {

                cin >> n;

                if(n < 3) {
                        cout << "0" << endl;
                }
                else if(n==3) {
                        cout << "10" << endl;
                }
                else {
                        cout << pow(3,n-3+1)*10 << endl;
                }

        }

        return 0;
}
