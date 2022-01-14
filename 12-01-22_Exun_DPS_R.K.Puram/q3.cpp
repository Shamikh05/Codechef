#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int n, a;
                cin >> n >> a;

                if(n==1) {

                        if(a%2==0) cout << "Even" << endl;
                        else cout << "Odd" << endl;
                        continue;
                }
                if(n==2 and a==0) {
                        cout << "Odd" << endl;
                        continue;
                }
                if(a%2==1) {

                        if(n%2==0) cout << "Even" << endl;
                        else cout << "Odd" << endl;
                        continue;
                }
                if(a%2==0) {
                        cout << "Impossible" << endl;
                        continue;
                }
        }


        return 0;
}
