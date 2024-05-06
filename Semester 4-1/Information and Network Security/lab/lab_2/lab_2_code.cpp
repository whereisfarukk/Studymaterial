#include <bits/stdc++.h>
#define ll long long
#define mx 1000010
using namespace std;
/***************************************************************************************/

string cipher_text ;
map<char, int>text_frequency;
unordered_map<char, char>m;
vector<char> text, english_text = {'e', 't', 'a', 'o', 'n', 'h', 'i', 's', 'r', 'd', 'l', 'u', 'w', 'm', 'g', 'c', 'f', 'y', 'b', 'p', 'k', 'v', 'j', 'x', 'q', 'z'};
void mapping() {
        for (int i = 0; i < text.size(); i++) {
                m.insert({text[i], english_text[i]});
        }
}
void text_frequency_cont() {
        vector<pair<char, int>>p;
        map<int, char> temp;
        for (int i = 0; i < cipher_text.size(); i++) {
                if (isalpha(cipher_text[i])) {
                        text_frequency[cipher_text[i]]++;

                }

        }

        for (auto it : text_frequency) {
                p.push_back({it.first, it.second});
        }
        sort(p.begin(), p.end(), [](const auto & a, const auto & b) {
                return a.second > b.second; 
        });
        for (auto it : p) {
                text.push_back(it.first);
        }
        mapping();
}

void substitution() {

        text_frequency_cont();

        // for (int i = 0; i < cipher_text.size(); i++) {
        //         if (isalpha(cipher_text[i])) {
        //                 cout<<m[cipher_text[i]];
        //         }
        //         else{
        //                 cout<<cipher_text[i];
        //         }
        // }
        // for (auto it : m) {
        //         cout << it.first << " " << it.second << endl;
        // }


        // for(auto it : m){
        //         cout<<it.first<<" "<<it.second<<endl;
        // }
        for (int i = 0; i < cipher_text.size(); i++) {
                if (isalpha(cipher_text[i])) {
                        cout << m[cipher_text[i]];
                }
                else {
                        cout << cipher_text[i];
                }
        }

}

void solve() {
        getline(cin, cipher_text);
        substitution();
}

int main()
{
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        solve();
        return 0;
}
