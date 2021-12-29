#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<long long> v;
    v.push_back(1);
    v.push_back(1);
    for(int i=2;i<=20;i++) {
        v.push_back(i*v.back());
    }
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        int n;
        cin >> n;
        cout << v[n] << endl;
    }
    return 0;
}
