#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--) {

                int n, k;
                cin >> n >> k;

                vector<int> v(n,0);

                for(int i=0;i<n;++i) {
                        int num;
                        cin >> num;

                        v[i] = num;
                }

                sort(v.begin(), v.end());

                if(n==1) cout << v[0] << endl;
                else if(k < (n-1)) cout << v[k] << endl;
                else cout << v[n-1] << endl;

        }


        return 0;
}
