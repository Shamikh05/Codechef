#include <bits/stdc++.h>
using namespace std;

#define int long long

static bool comp(pair<int, int> p1, pair<int, int> p2) {
        return p1.second < p2.second;
}

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int n, r;
                cin >> n >> r;

                vector<pair<int, int> > v(n);

                for(int i=0;i<n;++i) {

                        int num;
                        cin >> num;

                        v[i].first = num;
                }

                for(int i=0;i<n;++i) {

                        int num;
                        cin >> num;

                        v[i].second = v[i].first - num;
                }

                // for(int i=0;i<n;++i) {
                //         cout << v[i].first << " " << v[i].second << endl;
                // }

                sort(v.begin(), v.end(), comp);

                int ans = 0;

                for(int i=0;i<n;++i) {

                        int cost = v[i].first;
                        int diff = v[i].second;

                        if(r >= cost) {
                                int s = ((r - cost) / diff) + 1;
                                r -= (s * diff);
                                ans += s;
                        }
                }

                cout << ans << endl;
        }

        return 0;
}
