#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

        ll t;
        cin >> t;

        while(t--) {

                ll n;
                cin >> n;

                set<ll> xs, ys;

                for(ll i=0;i<n;++i) {

                        ll x, y;
                        cin >> x >> y;

                        xs.insert(x);
                        ys.insert(y);
                }

                cout << xs.size() + ys.size() << endl;
        }

        return 0;
}
