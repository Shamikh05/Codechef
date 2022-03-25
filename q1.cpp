#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

        ll t;
        cin >> t;

        ll x, y;

        while(t--) {

                cin >> x >> y;

                x = x / 2;

                cout << min(x,y) << endl;
        }

        return 0;
}
