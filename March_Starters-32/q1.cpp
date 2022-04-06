#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--) {

                int n, m;
                cin >> n;

                int left = 0;

                if((n-m) > 0) left = n - m;

                int right = n;

                cout << left + right << endl;
        }

        return 0;
}
