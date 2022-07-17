#include <bits/stdc++.h>
#define N_INF    2e-16
#define P_INF    2e16
#define PI     3.14159265358979323846
#define Dpos(n)  fixed<<setprecision(n)
#define M    1000000007;
#define REP(i, n)  for (int i = 0; (i) < (int)(n); ++ (i))
#define REP2(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define rev(v)    reverse(v.begin(),v.end())
#define countv(v,a)    count(v.begin(),v.end(),a)
#define f first
#define s second
#define pb push_back
#define pop pop_back
#define mp make_pair
#define ll long long
#define bit_on __builtin_popcount
#define lb lower_bound
#define ub upper_bound
#define grtsrt(v)  sort(v.begin(),v.end(),greater<int>())
#define lcm(x,y) (x/__gcd(x,y))*y
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
using namespace std;

/***************************************************************************************/


void solve() {
	string str;
	cin>>str;
	int bitmask=0;
	for(int i=0;i<str.size();i++){
		bitmask=(bitmask ^ (1<<(str[i]-97)));
	}
	if((str.size()%2==0 && bitmask==0) || (str.size()%2==1 && bit_on(bitmask)==1)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("infutf.txt", "r", stdin);
	freopen("outputf.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}
