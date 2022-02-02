#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int x, y;
                cin >> x >> y;

                if(x==y) {
                        cout << 2*y - 1 << endl;
                        continue;
                }

                cout << (2 * y) + (x - y) << endl;

        }

        return 0;
}
