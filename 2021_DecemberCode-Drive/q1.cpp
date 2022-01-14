#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {

        int t;
        cin >> t;

        int a, b, c, d;

        while(t--) {

                cin >> a >> b >> c >> d;

                if(a < b) a += c;
                else if(a >= b) b += c;

                if(a < b) a += d;
                else if(a >= b) b += d;


                if(a >= b) cout << "N" << endl;
                else cout << "S" << endl;

        }

        return 0;
}
