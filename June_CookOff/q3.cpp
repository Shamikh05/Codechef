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

                int lcm;
                int gcd = 1;

                if(n&1) {
                        lcm = (n/2) * ((n/2)+1);
                }
                else {
                        n /= 2;

                        if(n==1)
                                lcm = 1;
                        else if(n&1)
                                lcm = (n-2) * (n+2);
                        else
                                lcm = (n-1) * (n+1);
                }

                cout << lcm - gcd << endl;
        }

        return 0;
}
