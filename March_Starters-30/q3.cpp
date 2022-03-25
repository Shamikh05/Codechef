#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                int n, m, x1, x2, y1, y2;

                cin >> n >> m;
                cin >> x1 >> y1;
                cin >> x2 >> y2;

                x1--;
                x2--;
                y1--;
                y2--;

                if(((x1+y1)%2) != ((x2+y2)%2)) {

                        for(int i=0;i<n;++i) {
                                for(int j=0;j<m;++j) {

                                        int temp = (i+j)%2;

                                        if(temp==((x1+y1)%2))
                                                cout << "1 ";
                                        else
                                                cout << "2 ";
                                }
                                cout << endl;
                        }
                }
                else {
                        vector<vector<int> > v(n, vector<int>(m,0));

                        for(int i=0;i<n;++i) {

                                for(int j=0;j<m;++j) {

                                        int temp = (i + j) % 2;

                                        if(temp==((x1+y1)%2))
                                                v[i][j] = 1;
                                        else
                                                v[i][j] = 2;
                                }
                        }

                        v[x1][y1] = 1;
                        v[x2][y2] = 2;

                        if(x2 > 0) v[x2-1][y2] = 4;
                        if(x2 < n-1) v[x2+1][y2] = 4;

                        if(y2 > 0) v[x2][y2-1] = 4;
                        if(y2 < m-1) v[x2][y2+1] = 4;


                        for(int i=0;i<n;++i) {

                                for(int j=0;j<m;++j) {
                                        cout << v[i][j] << " ";
                                }
                                cout << endl;
                        }
                }
        }

        return 0;
}
