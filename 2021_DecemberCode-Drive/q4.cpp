#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int compute_decimal(string &t) {

        cout << t << endl;
        //cout << t.size() << endl;
        int b = 1;

        int r = 0;

        for(int e=t.size()-1;e>=0;e--) {

                //cout << t[i] << " ";
                r += (t[e] * b);
                b = b * 2;
                cout << r << endl;
        }

        //cout << endl;
        return r;
}

int main() {

        int t;
        cin >> t;

        int n, k;

        while(t--) {

                cin >> n >> k;

                string s;
                cin >> s;

                int i = 0;

                int ans = 0;

                string temp;

                int num;

                while(i+k-1 < n) {

                        temp = s.substr(i,k);

                        num = compute_decimal(temp);

                        cout << num << endl;

                        ans ^= num;

                        i++;
                        temp.clear();
                }

                cout << ans << endl;

        }

        return 0;
}
