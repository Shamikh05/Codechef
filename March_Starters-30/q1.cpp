#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int n;
                cin >> n;

                string str;
                cin >> str;

                int zeroes = 0;
                int ones = 0;

                for(char ch : str) {
                        if(ch=='0') zeroes++;
                        else if(ch=='1') ones++;
                }

                string ans;

                while(zeroes) {
                        ans.push_back('0');
                        zeroes--;
                }

                while(ones) {
                        ans.push_back('1');
                        ones--;
                }

                cout << ans << endl;
        }

        return 0;
}
