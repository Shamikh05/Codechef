#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

        ll t;
        cin >> t;

        ll n;

        string c1 = "code";
        string c2 = "chef";

        while(t--) {

                cin >> n;

                string s;
                cin >> s;

                string str;

                ll count = 0;

                for(ll i=0;i<n;i++) {

                        str.push_back(s[i]);

                        if(str.find(c1) != string::npos) {
                                count++;
                                str.clear();
                        }
                        else if(str.find(c2) != string::npos) {
                                count--;
                                str.clear();
                        }

                        if(count < 0) {
                                cout << "WA" << endl;
                                break;
                        }
                }

                if(count >= 0) cout << "AC" << endl;
                //else cout << "WA" << endl;

        }

        return 0;
}
