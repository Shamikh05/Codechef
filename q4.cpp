#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll compute(ll x) {

        ll ans = 0;

        for(ll i=0;i<32;++i) {

                if((1<<i)==x)
                        return i + 1;

                if(((1 << i) & x) == (1 << i)) {

                        if(x==i)
                                ans = i;
                        else
                                ans = i + 1;
                }
        }

        return ans + 1;
}

int main() {

        ll t;
        cin >> t;

        while(t--) {

                ll x, m;
                cin >> x >> m;

                ll ans = compute(x);

                if(ans <= m)
                        cout << m - ans + 1 << endl;
                else
                        cout << "0" << endl;
        }

        return 0;
}
