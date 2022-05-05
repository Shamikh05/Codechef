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

                vector<int> v(n, 0);

                int maxe = INT_MIN;

                for(int i=0;i<n;++i) {
                        int num;
                        cin >> num;

                        v[i] = num;

                        maxe = max(maxe, num);
                }

                int ans = 0;

                for(int num : v) {

                        double k = ((double)(num))/((double)(x));

                        ans += ceil(k);
                }

                ans = min(ans, maxe);

                cout << ans << endl;
        }

        return 0;
}
