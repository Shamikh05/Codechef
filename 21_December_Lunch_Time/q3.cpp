#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main () {

        int t;
        cin >> t;

        int n, ans;

        int count0, count1;

        while(t--) {

                cin >> n;

                string s;
                cin >> s;

                count0 = 0;
                count1 = 0;

                for(int i=0;i<n;i++) {
                        if(s[i]=='0') count0++;
                        else if(s[i]=='1') count1++;
                }

                ans = min(count0, count1) - 1;

                if(ans < 0) ans = 0;

                cout << ans << endl;
        }

        return 0;

}
