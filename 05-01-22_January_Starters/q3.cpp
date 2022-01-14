#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

        ll t;
        cin >> t;

        ll n, x, y;

        while(t--) {

                cin >> n >> x >> y;

                ll dest = (n + 1)/2;

                y += abs(dest - x);

                if(abs(y-dest) % 2 == 0) cout << "0" << endl;
                else cout << "1" << endl;
        }

        return 0;
}
