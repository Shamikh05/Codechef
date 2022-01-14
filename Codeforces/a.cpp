#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        ll t;
        cin >> t;

        while(t--) {

                ll n;
                cin >> n;

                ll maxNum = INT_MIN;
                ll minNum = INT_MAX;

                for(ll i=0;i<n;++i) {

                        ll num;
                        cin >> num;

                        maxNum = max(maxNum,num);
                        minNum = min(minNum,num);
                }

                cout << maxNum - minNum << endl;
        }

        return 0;
}
