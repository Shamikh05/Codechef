#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main () {

        int t;
        cin >> t;

        int n,s,e;

        //int ans = 0;

        int m1 = INT_MAX;
        int m2 = INT_MIN;

        while(t--) {

                cin >> n;

                vector<int> v(n,0);
                vector<int> a(n,0);
                vector<int> b(n,0);

                m1 = INT_MAX;
                m2 = INT_MIN;

                for(int i=0;i<n;i++) {
                        int num;
                        cin >> num;
                        v[i] = num;

                        m2 = max(m2,v[i]);
                        b[i] = m2;
                }

                for(int i=n-1;i>=0;i--) {
                        m1 = min(m1,v[i]);
                        a[i] = m1;
                }

                s = 0;
                e = n-1;

                for(int i=0;i<n;i++) {
                        if(v[i] != a[i]) {
                                s = i;
                                break;
                        }
                }

                for(int i=n-1;i>=0;i--) {
                        if(v[i] != b[i]) {
                                e = i;
                                break;
                        }
                }

                int idx = b[n-1];

                int freq[idx+1] = {0};

                for(int i=s;i<=e;i++) {
                        freq[v[i]]++;
                }

                int ans = 0;
                e = b[n-1];

                /*for(int i=0;i<=e;i++) {
                        cout << freq[i] << " ";
                }
                cout << endl;*/

                for(int i=idx;i>=0;i--) {

                        if(freq[i]>0) {
                                ans += e - i;
                                freq[i]--;
                                e = i;
                        }
                }

                if(a[0]==v[0] && b[n-1]==v[n-1]) cout << "0" << endl;
                else cout << ans << endl;
        }

        return 0;

}
