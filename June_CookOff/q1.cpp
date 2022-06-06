#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--) {

                int l, r;
                cin >> l >> r;

                if((l % 2) != 0)
                        l += 1;

                if((l % 2) == 0 and (l + 3) <= r)
                        cout << l << " " << l + 1 << " " << l + 2 << " " << l + 3 << endl;
                else
                        cout << -1 << endl;
        }

        return 0;
}
