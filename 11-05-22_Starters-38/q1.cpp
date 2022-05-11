#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--) {

                int a, b, m;
                cin >> a >> b >> m;

                int path1 = abs(a-b);
                int path2 = m - path1;

                cout << min(path1, path2) << endl;
        }

        return 0;
}
