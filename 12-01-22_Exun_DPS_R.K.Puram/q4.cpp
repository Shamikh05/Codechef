#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int m, x;
                cin >> m >> x;

                m = m - 1;

                int arr[x];
                arr[0] = 1;

                int p;

                for(int i=1;i<x;++i) {

                        p = (m % (i+1)) + 1;

                        if(arr[i-1] < p)
                                arr[i] = arr[i-1];
                        else
                                arr[i] = arr[i-1] + 1;
                }

                for(int i=0;i<x;++i) {

                        cout << arr[i] << " ";
                }

                cout << endl;

        }


        return 0;
}
