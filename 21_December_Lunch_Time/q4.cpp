#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main () {

        int t;
        cin >> t;

        int n, k;

        string s;

        int i,j;

        while(t--) {

                cin >> n >> k;
                cin >> s;

                string ans;
                string suffix = s.substr(k,n-k);

                int i = 0;
                int j = k - 1;

                while(i<j) {

                        ans.push_back(s[i]);
                        ans.push_back(s[j]);

                        i++;
                        j--;
                }

                if(i==j) ans.push_back(s[i]);

                reverse(ans.begin(), ans.end());

                ans.append(suffix);

                cout << ans << endl;
        }

        return 0;

}
