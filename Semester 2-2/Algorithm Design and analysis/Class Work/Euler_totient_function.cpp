#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll phi_fun(ll n) {
        vector<ll>prime_factors;
        ll ans = n, i;
        for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                        while (n % i == 0) {
                                n /= i;
                        }
                        prime_factors.push_back(i);
                }
        }
        if (n > 1) {
                prime_factors.push_back(n);
        }
        for (auto p : prime_factors) {
                ans *= (p - 1);
                ans /= p;
        }
        return ans;
}
void solve() {
        ll n;
        cin >> n;
        cout << phi_fun(n);

}

int main()
{
        solve();
        return 0;
}
