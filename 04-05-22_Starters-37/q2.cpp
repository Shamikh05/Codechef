#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--) {

                int n, m, x;
                cin >> n >> m >> x;

                int ts = n * x;

                int ans = 0;

                if((x + 1) <= m) ans = (ts / (x + 1));

                cout << ans << endl;
        }

        return 0;
}
