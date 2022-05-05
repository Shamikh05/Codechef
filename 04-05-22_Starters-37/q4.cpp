#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--) {

                int n;
                cin >> n;

                int ts = 0;

                for(int i=0;i<n;++i) {
                        int num;
                        cin >> num;

                        ts += num;
                }

                int c = ts + 1 - (n/2);

                string ans;

                if((c-1) % n == 0) ans = "YES";
                else ans = "NO";

                cout << ans << endl;
        }

        return 0;
}
