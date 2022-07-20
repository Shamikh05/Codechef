#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--) {

                int n, m;
                cin >> n >> m;

                int ans = 0;

                if(n%2==0 and m%2==0) {
                        ans = 0;
                }
                else if(n%2==1 or m%2==1) {
                        if(n%2==1 and m%2==1) ans += (n + m -1);
                        else {
                                if(n%2==1) ans += m;
                                else ans += n;
                        }
                }

                cout << ans << endl;
        }

        return 0;
}
