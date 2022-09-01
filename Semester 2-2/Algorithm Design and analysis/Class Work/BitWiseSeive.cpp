#include <bits/stdc++.h>
#define N 100
using namespace std;

int isComposite[N / 32];
vector<int> primes; 
bool bitCheck(int indx, int pos) {
       if (isComposite[indx] & (1 << pos)) {
              return true;
       }
       return false;
}
void setBit(int indx, int pos) {
       isComposite[indx] |= (1 << pos);
}
void solve() {
       for (int i = 2; i <= N; i++) {
              if (!(bitCheck(i / 32, i % 32))) {
                     primes.push_back(i);
              }
              for (int j = 0; j < primes.size(), primes[j]*i <= N; j++) {
                     int indx = (primes[j] * i) / 32;
                     int pos = (primes[j] * i) % 32;
                     setBit(indx, pos);
                     if (i % primes[j] == 0) {
                            break;
                     }
              }
       }
       for (auto p : primes) {
              cout << p << " ";
       }

}

int main() {
       solve();

}
