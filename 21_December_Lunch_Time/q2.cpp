#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main () {

        int t;
        cin >> t;

        int n;

        while(t--) {

                cin >> n;
                vector<int> v(n,0);

                for(int i=0;i<n;i++) {
                        int num;
                        cin >> num;
                        v[i] = num;
                }

                int a = INT_MIN;
                int b = INT_MAX;

                for(auto it : v) {
                        a = max(it,a);
                        b = min(it,b);
                }

                int c = INT_MIN;

                bool flag = 1;

                for(auto it : v) {

                        if(it==a and flag) {
                                flag = 0;
                                continue;
                        }

                        c = max(c,it);
                }

                cout << (a-b)*c << endl;
        }

        return 0;

}
