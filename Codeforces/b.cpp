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

                ll a, b, c;
                cin >> a >> b >> c;

                if(a==b and b==c) {
                        cout << "YES" << endl;
                        continue;
                }

                else if(a<b and a<c) {

                        if(b>c) {
                                if((b+(b-c))%a==0 and (b+(b-c))!=0) {
                                        cout << "YES" << endl;
                                        continue;
                                }
                        }
                        else if(b<c) {
                                if((b-(c-b))%a==0 and (b-(c-b))!=0) {
                                        cout << "YES" << endl;
                                        continue;
                                }
                        }
                }

                else if(b<=a and b<c) {

                        if(((a+c)/2)%b==0 and ((a+c)/2)%b != 0) {
                                cout << "YES" << endl;
                                continue;
                        }
                }

                else if(c<a and c<b) {

                        if(a>b) {
                                if((b-(a-b))%c==0 and (b+(a-b))!=0) {
                                        cout << "YES" << endl;
                                        continue;
                                }
                        }
                        else if(a<b) {
                                if((b+(b-a))%b==0 and (b+(b-a))!=0) {
                                        cout << "YES" << endl;
                                        continue;
                                }
                        }

                }

                cout << "NO" << endl;
        }

        return 0;
}
