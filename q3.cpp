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

                vector<ll> v(100001,0);

                ll maxNum = 0;

                for(ll i=0;i<2*n;++i) {

                        ll num;
                        cin >> num;

                        maxNum = max(maxNum,num);

                        v[num]++;
                }

                bool flag = 0;

                for(ll i=0;i<=maxNum;++i) {

                        if(v[i]==0) {
                                cout << "YES" << endl;
                                flag = 1;
                                break;
                        }

                        else if(v[i] < 2) {
                                cout << "NO" << endl;
                                flag = 1;
                                break;
                        }
                }

                if(!flag)
                        cout << "YES" << endl;
        }

        return 0;
}
