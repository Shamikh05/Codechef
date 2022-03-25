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

                string s;
                cin >> s;

                if(is_sorted(v.begin(),v.end())) {
                        cout << 0 << endl;
                        continue;
                }

                int northCount = 0;

                for(auto ch : s) {
                        if(ch=='N')
                                northCount++;
                }

                if(northCount==n or northCount==0) {
                        cout << -1 << endl;
                        continue;
                }

                vector<int> b = v;

                sort(v.begin(), v.end());

                int start = INT_MAX;
                int end = INT_MIN;

                for(int i=0;i<n;++i) {
                        if(v[i] != b[i]) {
                                start = min(start, i);
                                end = max(end, i);
                        }
                }

                bool f1 = false;
                bool f2 = false;

                for(int i=0;i<start;++i) {
                        if(s[i] != s[end])
                                f1 = true;
                }

                for(int i=end;i<n;++i) {
                        if(s[i] != s[start])
                                f2 = true;
                }

                if(s[start] != s[end] or f1 or f2) {
                        cout << 1 << endl;
                }
                else {
                        cout << 2 << endl;
                }
        }

        return 0;
}
