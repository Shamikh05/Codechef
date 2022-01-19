#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int k;
                cin >> k;

                if(k%2!=0)
                        cout << "0" << endl;

                else {

                        int originalK = k;

                        int ans = 0;

                        int sum = 0;

                        while(k>1) {

                                k /= 2;

                                if((2*k + sum)!=originalK) {
                                        break;
                                }

                                ans++;

                                sum += k;
                        }

                        /*int s = k / 2;
                        int sum = s;
                        int ans = 1;

                        while(s--) {

                                if(s+s+sum==k) {
                                        ans++;
                                        sum += s;
                                }
                        }*/

                        cout << ans << endl;


                }
        }

        return 0;
}
