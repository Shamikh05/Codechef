#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int n;
                cin >> n;

                int a, b, c;

                int temp = 0;
                int count = 0;

                while(temp < n) {

                        temp += pow(2,count);
                        count++;
                }

                count++;

                temp = n + pow(2,count);

                cout << n << " 0 " << temp << endl;
        }

        return 0;
}
