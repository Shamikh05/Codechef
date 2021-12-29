#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {

        int t;
        cin >> t;

        int n, k;

        string s;

        int i,j;

        while(t--) {

                cin >> n >> k;
                cin >> s;

                i = 0;
                j = k - 1;

                if(k % 2 != 0) {
                        while(i<j) {

                                if(s[i] != s[j])
                                        swap(s[i],s[j--]);
                                else {
                                        i++;
                                        j--;
                                }
                        }
                }
                else {
                        while(i<j-1) {

                                if(s[i] != s[j])
                                        swap(s[i],s[j--]);
                                else {
                                        i++;
                                        j--;
                                }
                        }
                }

                cout << s << endl;
        }

        return 0;

}
