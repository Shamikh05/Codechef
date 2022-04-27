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

                int n;
                cin >> n;

                vector<int> even, odd;

                int evenCnt = 0;
                int oddCnt = 0;

                for(int i=0;i<n;++i) {

                        int num;
                        cin >> num;

                        if(num % 2 == 0) {
                                ++evenCnt;
                                even.push_back(num);
                        }
                        else {
                                ++oddCnt;
                                odd.push_back(num);
                        }
                }

                sort(even.begin(), even.end());
                sort(odd.begin(), odd.end());

                int ans = 0;

                double e = ((double)(evenCnt))/((double)(2));
                double o = ((double)(oddCnt))/((double)(2));

                evenCnt = ceil(e);
                oddCnt = ceil(o);

                for(int i=even.size()-1;i>=0 and evenCnt;--i) {
                        --evenCnt;
                        ans += even[i];
                }

                for(int i=odd.size()-1;i>=0 and oddCnt;--i) {
                        --oddCnt;
                        ans += odd[i];
                }

                cout << ans << endl;
        }

        return 0;
}
