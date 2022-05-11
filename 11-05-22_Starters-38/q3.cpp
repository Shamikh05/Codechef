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

                int sum = 0;

                int minE = INT_MAX;
                int maxE = INT_MIN;

                for(int i=0;i<n;++i) {

                        int num;
                        cin >> num;

                        minE = min(minE, num);
                        maxE = max(maxE, num);
                }

                string ans = "YES";

                if(x < minE || x > maxE) ans = "NO";

                cout << ans << endl;
        }

        return 0;
}
