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

                string s;
                cin >> s;

                if(n % 2 == 1) {
                        cout << "NO" << endl;
                        continue;
                }

                map<char,int> mp;

                for(int i=0;i<n;++i) {
                        mp[s[i]]++;
                }

                vector<pair<int,char>> v;

                for(auto it : mp) {
                        v.push_back({it.second,it.first});
                }

                sort(v.begin(), v.end());

                string r = "";

                int p;

                for(int i=0;i<v.size();++i) {

                        p = v[i].first;

                        if(p > (n/2)) {
                                cout << "NO" << endl;
                                break;
                        }

                        for(int j=0;j<p;++j) {
                                r += v[i].second;
                        }
                }

                int j = n / 2;

                int i = 0;

                j--;

                char c;

                while(i < j) {

                        c = r[i];
                        r[i] = r[j];
                        r[j] = c;

                        i++;
                        j--;
                }

                cout << "YES" << endl;
                cout << r << endl;
        }

        return 0;
}
