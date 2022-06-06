#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--) {

                int n, x;
                cin >> n >> x;

                if(x & 1) {
                        cout << "YES" << endl;
                }
                else {
                        if((n-x) % 2 == 0) cout << "YES" << endl;
                        else cout << "NO" << endl;
                }
        }

        return 0;
}
