#include <bits/stdc++.h>
using namespace std;

#define int long long

int compute(vector<int> &v, int n, int i, int prev, vector<vector<int> > &dp1, vector<vector<int> > &dp2) {

        if(i==n) {
                return 0;
        }

        if(prev <= 100000)
                if(dp1[i][prev] != -1) return dp1[i][prev];

        if(prev > 100000)
                if(dp2[i][prev-100000] != -1) return dp2[i][prev-100000];

        int a = compute(v,n,i+1,prev,dp1,dp2);

        int b = 0;

        if(v[i] > prev) {
                b = 1 + compute(v,n,i+1,v[i],dp1,dp2);
        }

        int ans = max(a, b);

        if(prev > 100000) {
                dp2[i][prev-100000] = ans;
        }
        else {
                dp1[i][prev] = ans;
        }

        return ans;
}

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int n;
                cin >> n;

                vector<int> v(n,0);

                for(int i=0;i<n;++i) {

                        int num;
                        cin >> num;

                        v[i] = num;
                }

                vector<vector<int> > dp1(n+1, vector<int>(100000,-1));
                vector<vector<int> > dp2(n+1, vector<int>(100000,-1));

                int ans = compute(v,n,0,0,dp1,dp2);

                ans++;

                cout << ans << endl;
        }

        return 0;
}
