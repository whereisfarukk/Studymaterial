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
int FindSmallest(vector<ll>&arr, int low, int high) {
	int mid = (low + high) / 2;
	if (arr[mid] < arr[mid - 1]) {
		return arr[mid];
	}
	if (arr[mid] > arr[mid + 1]) {
		return arr[mid + 1];
	}
	if (arr[mid] > arr[high]) {
		return FindSmallest(arr, mid + 1, high);
	}
	else {
		return FindSmallest(arr, low, mid - 1);
	}
}

void solve() {
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		vector<ll>arr;
		cin >> n;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			arr.push_back(x);
		}
		cout << FindSmallest(arr, 0, n - 1) << endl;
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
