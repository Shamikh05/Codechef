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

                ll n;
                cin >> n;

                vector<ll> arr(n);

                for(ll i=0;i<n;++i) {
                        int num;
                        cin >> num;
                        arr[i] = num;
                }

                vector<ll> cp;

                for(ll i=1;i<=n;i++)
                        cp.push_back(i);

                priority_queue<ll, vector<ll>> pq;

                for(auto it : arr)
                        pq.push(it);

                bool flag = true;

                while(!pq.empty()) {
                        if(pq.top() > cp.back()) {
                                ll el = pq.top();
                                pq.pop();
                                pq.push(el/2);
                        }
                        else if(pq.top() == cp.back()) {
                                pq.pop();
                                cp.pop_back();
                        }
                        else {
                                flag = false;
                                break;
                        }
                }

                if(flag)
                        cout << "YES" << endl;
                else
                        cout << "NO" << endl;
        }

        return 0;
}
