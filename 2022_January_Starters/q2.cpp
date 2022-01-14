#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

        ll t;
        cin >> t;

        ll n, m, a, b;

        while(t--) {

                cin >> n >> m;

                if(n%2==0) {
                        a = n/2;
                }
                else if(n%2!=0) {
                        a = (n/2) + 1;
                }

                if(m%2==0) {
                        b = m/2;
                }
                else if(m%2!=0) {
                        b = (m/2) + 1;
                }

                cout << a*b << endl;
        }

        return 0;
}
