#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int n, k;
                cin >> n >> k;

                if(n==1 and k==1) {
                        cout << "1" << endl;
                }
                else if(k<2 or k>n) {
                        cout << "-1" << endl;
                }
                else {
                        vector<int> v(n,0);

                        for(int i=0;i<n;++i)
                                v[i] = n-i;

                        k = n - k;

                        int idx = n - 2;

                        while(k--) {
                                swap(v[idx],v[idx-1]);
                                idx--;
                        }

                        for(int i=0;i<n;++i) {
                                cout << v[i] << " ";
                        }
                        cout << endl;

                }
        }

        return 0;
}
