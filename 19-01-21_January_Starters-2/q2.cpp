#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        vector<int> v;

        for(int i=0;i<17;++i) {

                for(int j=i+1;j<18;++j) {

                        for(int k=j+1;k<19;++k) {

                                for(int l=k+1;l<20;++l) {

                                        int inp = (1 << i) + (1 << j) + (1 << k) + (1 << l);
                                        v.push_back(inp);
                                }

                                if(v.size()==1000) break;
                        }

                        if(v.size()==1000) break;
                }

                if(v.size()==1000) break;
        }

        int t;
        cin >> t;

        while(t--) {

                int n;
                cin >> n;

                if(n==1)
                        cout << "6" << endl;

                else {

                        for(int i=0;i<n;++i) {
                                cout << v[i] << " ";
                        }
                        cout << endl;

                }
        }

        return 0;
}
