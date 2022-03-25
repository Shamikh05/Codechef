#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long


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

                int i = 0;
                int j = n - 1;

                int sum1 = 0;
                int sum2 = 0;

                while(i <= j) {

                        if(sum1 <= sum2)
                                sum1 += v[i++];
                        else
                                sum2 += v[j--];
                }

                int ans = max(sum1, sum2);

                cout << ans << endl;
        }

        return 0;
}
