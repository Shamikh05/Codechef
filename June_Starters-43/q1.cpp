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

                if((n % 2 == 0) and x > (n/2)) {
                        cout << -1 << endl;
                }
                else if((n % 2 != 0) and x > ((n/2) + 1)) {
                        cout << -1 << endl;
                }
                else {
                        string ans = "";

                        char ch = 'a';

                        while(x) {
                                ans.push_back(ch);
                                ++ch;
                                --x;
                        }

                        --ch;

                        if(n==1 and x==1) {
                                cout << ans << endl;
                                continue;
                        }


                        while(ans.size() < (n/2))
                                ans.push_back(ch);

                        if(n&1 and ans.size() > (n/2)) {
                                ans.pop_back();
                        }

                        string rev = ans;
                        reverse(rev.begin(), rev.end());

                        if(n&1) ans.push_back(ch);

                        ans += rev;

                        cout << ans << endl;
                }
        }

        return 0;
}
