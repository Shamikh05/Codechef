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

                int pairs = 0;

                for(int i=1;i<=((n-1)/2);++i) {

                        if(n % i == 0)
                                ++pairs;
                }

                pairs *= 2;

                if(!(n&1)) {
                        ++pairs;
                }

                cout << pairs << endl;
        }

        return 0;
}
