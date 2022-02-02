#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int n, k;
                cin >> n >> k;

                string s;
                cin >> s;

                string temp = "";

                for(int i=0;i<n;++i) {
                        temp += ((58 - s[i]) % 10 + 48);
                }

                int tot = 0;

                int prev = (temp[0] - 48) % 10;
                tot += prev;

                vector<int> totals;

                for(int i=1;i<n;++i) {

                        totals.push_back(tot);

                        if(k < 0)
                                break;

                        int curr = (temp[i] - 48) % 10;

                        if(curr > prev) {
                                tot += 10;
                        }

                        prev = curr;
                }

                totals.push_back(tot);

                int ans = 0;

                for(int num : totals) {

                        if(num > k)
                                break;

                        ans++;
                }

                cout << ans << endl;

        }

        return 0;
}
