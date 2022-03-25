#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        vector<int> v = {6,7,13,14,20,21,27,28};

        int t;
        cin >> t;

        while(t--) {

                int n;
                cin >> n;

                int ans = n + 8;

                for(int i=0;i<n;++i) {

                        int day;
                        cin >> day;

                        if(binary_search(v.begin(), v.end(), day)) {
                                ans--;
                        }
                }

                cout << ans << endl;
        }

        return 0;
}
