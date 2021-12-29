#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {

        int t;
        cin >> t;

        int x, y, z;

        while(t--) {

                cin >> x >> y >> z;

                if(x+y < z) cout << "PLANEBUS" << endl;
                else if(x+y > z) cout << "TRAIN" << endl;
                else cout << "EQUAL" << endl;
        }

        return 0;

}
