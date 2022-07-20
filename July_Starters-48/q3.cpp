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

                multiset<int> s;

                for(int i=0;i<n;++i) {

                        int num;
                        cin >> num;

                        s.insert(num);
                }

                int ans = 1;

                int k = 1;

                while(s.size()) {

                        auto it = s.lower_bound(k);

                        if(it != s.end()) {
                                s.erase(it);
                                ++k;
                        }
                        else {
                                k = 1;
                                ++ans;
                        }
                }

                cout << ans << endl;
        }

        return 0;
}
