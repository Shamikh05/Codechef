#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int n, k;
                cin >> n >> k;

                vector<int> v;

                for(int i=0;i<n;++i) {

                        int num;
                        cin >> num;

                        v.push_back(num);
                }

                sort(v.begin(), v.end());

                int ans = 0;

                for(int i=0;i<n;++i) {

                        ans++;
                        k -= v[i];

                        if(k < 0) {

                                k += (v[i]/2);
                                break;
                        }
                }

                if(k >= 0)
                        cout << ans << endl;
                else
                        cout << ans - 1 << endl;
        }

        return 0;
}
