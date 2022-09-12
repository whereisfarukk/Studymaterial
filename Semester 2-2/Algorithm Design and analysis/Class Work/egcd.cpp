#include <bits/stdc++.h>
using namespace std;
int egcd(int a, int b, int &x, int &y) {
        if (b == 0) {
                x = 1, y = 0;
                return a;
        }
        int x1, y1;
        int d = egcd(b, a % b, x1, y1);
        y = x1 - (a / b) * y1;
        x = y1;
        return d;
}

void solve() {
        int a, b, x, y;
        cin >> a >> b;
        cout << "gcd is :" << egcd(a, b, x, y) << "\n" << "x is :" << x << "\n" << "y is :" << y;
}

int main()
{
        solve();
        return 0;
}
