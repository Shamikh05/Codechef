#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int n;
                cin >> n;

                if(n==1)
                        cout << "0" << endl;
                else {

                        int ans = 0;

                        for(int i=0;i<n;i+=2) {

                                if((i+2) <= n) {
                                        ans += ((i+1)^(i+2));
                                        ans += ((i+2)^(i+1));
                                }
                        }

                        cout << ans << endl;
                }

        }

        return 0;
}
