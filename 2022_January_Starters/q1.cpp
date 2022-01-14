#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

        ll t;
        cin >> t;

        ll z, y, a, b, c;

        while(t--) {

                cin >> z >> y >> a >> b >> c;

                if((a+b+c) <= (z-y)) cout << "YES" << endl;
                else cout << "NO" << endl;
        }

        return 0;
}
