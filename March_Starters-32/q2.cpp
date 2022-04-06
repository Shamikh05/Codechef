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

                string s;
                cin >> s;

                vector<pair<int, int>> v;

                int op = 0;

                int len = s.length();

                for(int i=0;i<n;++i) {
                        if(s[i]=='1') {
                                ++op;
                                v.push_back({i+1,len});

                                for(int j=i;j<(i+len);++j) {
                                        if(s[j]=='0') s[j] = '1';
                                        else s[j] = '0';
                                }
                        }
                        len--;
                }

                int v_size = v.size();

                cout << op << endl;

                for(int i=0;i<v_size;++i) {
                        cout << v[i].first << " " << v[i].second << endl;
                }
        }


        return 0;
}
