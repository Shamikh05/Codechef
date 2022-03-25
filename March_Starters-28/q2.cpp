#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int n;
                cin >> n;

                if(n==2) {
                        cout << "-1" << endl;
                }
                else if(n%2) {
                        for(int i=n;i>=1;i--) {
                                cout << i << " ";
                        }
                }
                else {
                        cout << "2 3 1 4 ";

                        for(int i=5;i<=n;++i) {
                                cout << i << " ";
                        }
                }

                cout << endl;
        }

        return 0;
}
