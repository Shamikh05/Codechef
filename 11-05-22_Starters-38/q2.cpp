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

                vector<int> a(n, 0);

                for(int i=0;i<n;++i) {

                        int num;
                        cin >> num;

                        a[i] = num;
                }

                vector<int> b(n, 0);

                for(int i=0;i<n;++i) {

                        int num;
                        cin >> num;

                        b[i] = num;
                }

                map<pair<int, int>, int> mp;

                int ans = 0;

                for(int i=0;i<n;++i) {
                        ans += mp[{a[i], b[i]}];
                        mp[{b[i], a[i]}]++;
                }

                cout << ans << endl;
        }

        return 0;
}
