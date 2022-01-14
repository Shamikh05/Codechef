#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

        ll t, n;
        cin >> t;

        while (t--) {

                ll ans = 0;

                cin >> n;

                vector<ll> v(n);
                vector<ll> bits(32);

                for(ll i=0;i<n;++i) {
                        cin >> v[i];
                }

                for(ll i=0;i<n;++i) {

                        for(ll j=0;j<32;++j) {
                                bits[j] += ((v[i] & (1 << j)) > 0);
                        }
                }


                for (ll i=0;i<32;++i) {
                        if (bits[i] >= 2) {
                                ans |= (1 << i);
                        }
                }

                cout << ans << endl;
        }

        return 0;
}
