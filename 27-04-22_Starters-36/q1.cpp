#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int n;
                cin >> n;

                cout << (4 * (n / 5)) + (n % 5) << endl;
        }

        return 0;
}
