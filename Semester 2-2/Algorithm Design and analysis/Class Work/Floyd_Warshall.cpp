#include <bits/stdc++.h>
#define P_INF    2e16
#define ll long long
using namespace std;

ll dis[10000][10000];

void solve() {
       ll nodes , edges;
       cin >> nodes >> edges;
       for (int i = 0; i <= nodes; i++) {
              for (int j = 0; j <= nodes; j++) {
                     if (i == j) dis[i][j] = 0;
                     else  dis[i][j] = P_INF;
              }
       }
       for (int i = 0; i < edges; i++) {
              ll x, y, wt;
              cin >> x >> y >> wt;
              dis[x][y] = wt;
       }
       for (int k = 1; k <= nodes; k++) {
              for (int i = 1; i <= nodes; i++) {
                     for (int j = 1; j <= nodes; j++) {
                            dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                     }
              }
       }
       for (int i = 1; i <= nodes; i++) {
              for (int j = 1; j <= nodes; j++) {
                     if(dis[i][j]>=P_INF) cout<<"I ";
                      else cout << dis[i][j] << " ";
              }
              cout << endl;
       }

}



int main() {

       solve();

       return 0;


}

