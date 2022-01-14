#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int ans = 0;

                for(int i=1;i<=3;i++) {

                        int a, b;
                        cin >> a >> b;

                        ans = max(ans, a+b);

                }

                cout << ans << endl;
        }

        return 0;
}
