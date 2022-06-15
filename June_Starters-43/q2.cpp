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

                int i = 1;
                int t = 0;

                int count = 0;

                while(1) {

                        int a = i;
                        int b = n - i;

                        if(b%a==0 and a != b) ++count;

                        if(a==b) t = 1;

                        ++i;

                        if(a==(n/2)) break;
                }

                cout << 2 * count + t << endl;

        }

        return 0;
}
