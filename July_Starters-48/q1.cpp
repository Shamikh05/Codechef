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

                string str;
                cin >> str;

                int ones = 0;
                int zeroes = 0;

                for(int i=0;i<n;++i) {
                        if(str[i]=='1') ++ones;
                        else ++zeroes;
                }

                string ans = "";

                if(ones > zeroes) {

                        for(int i=0;i<(n/2);++i)
                                ans.push_back('1');

                        if(n&1) ans.push_back('1');
                }
                else {
                        for(int i=0;i<(n/2);++i)
                                ans.push_back('0');

                        if(n&1) ans.push_back('0');
                }

                cout << ans << endl;
        }

        return 0;
}
