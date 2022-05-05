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

                int ones = 0;
                int zeroes = 0;

                for(int i=0;i<n;++i) {
                        int num;
                        cin >> num;

                        if(num==1) ++ones;
                        else if(num==0) ++zeroes;
                }

                int ans = (ones >= zeroes) ? 1 : 0;

                cout << ans << endl;
        }

        return 0;
}
