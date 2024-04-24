```c++
string caesar_decrypt(string ciphertext, int shift) {
        string plaintext;
        for (int i = 0; i < ciphertext.size(); i++) {
                char c = ((ciphertext[i] - 'a' - shift + 26) % 26) + 'a';
                plaintext.push_back(c);
        }
        return plaintext;
}

void break_caesar_cipher(string ciphertext) {
        for (int shift = 0; shift < 26; shift++) {
                string decrypted_text = caesar_decrypt(ciphertext, shift);
                cout << "For shift " << shift << " Decrypted text :" << decrypted_text << endl;
        }
}
void solve() {
        string input;
        cin >> input;
        break_caesar_cipher(input);
}
```
Output
```
For shift 0,  Decrypted text :odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo
For shift 1,  Decrypted text :ncqnandvrbcqnknbcbvjaclxwcajlcyujcoxavxdccqnan
For shift 2,  Decrypted text :mbpmzmcuqabpmjmabauizbkwvbzikbxtibnwzuwcbbpmzm
For shift 3,  Decrypted text :laolylbtpzaolilzazthyajvuayhjawshamvytvbaaolyl
For shift 4,  Decrypted text :kznkxkasoyznkhkyzysgxziutzxgizvrgzluxsuazznkxk
For shift 5,  Decrypted text :jymjwjzrnxymjgjxyxrfwyhtsywfhyuqfyktwrtzyymjwj
For shift 6,  Decrypted text :ixliviyqmwxlifiwxwqevxgsrxvegxtpexjsvqsyxxlivi
For shift 7,  Decrypted text :hwkhuhxplvwkhehvwvpduwfrqwudfwsodwiruprxwwkhuh
For shift 8,  Decrypted text :gvjgtgwokuvjgdguvuoctveqpvtcevrncvhqtoqwvvjgtg
For shift 9,  Decrypted text :fuifsfvnjtuifcftutnbsudpousbduqmbugpsnpvuuifsf
For shift 10, Decrypted text :ethereumisthebestsmartcontractplatformoutthere
For shift 11, Decrypted text :dsgdqdtlhrsgdadrsrlzqsbnmsqzbsokzsenqlntssgdqd
For shift 12, Decrypted text :crfcpcskgqrfczcqrqkypramlrpyarnjyrdmpkmsrrfcpc
For shift 13, Decrypted text :bqebobrjfpqebybpqpjxoqzlkqoxzqmixqclojlrqqebob
For shift 14, Decrypted text :apdanaqieopdaxaopoiwnpykjpnwyplhwpbknikqppdana
For shift 15, Decrypted text :zoczmzphdnoczwznonhvmoxjiomvxokgvoajmhjpooczmz
For shift 16, Decrypted text :ynbylyogcmnbyvymnmgulnwihnluwnjfunzilgionnbyly
For shift 17, Decrypted text :xmaxkxnfblmaxuxlmlftkmvhgmktvmietmyhkfhnmmaxkx
For shift 18, Decrypted text :wlzwjwmeaklzwtwklkesjlugfljsulhdslxgjegmllzwjw
For shift 19, Decrypted text :vkyvivldzjkyvsvjkjdriktfekirtkgcrkwfidflkkyviv
For shift 20, Decrypted text :ujxuhukcyijxuruijicqhjsedjhqsjfbqjvehcekjjxuhu
For shift 21, Decrypted text :tiwtgtjbxhiwtqthihbpgirdcigprieapiudgbdjiiwtgt
For shift 22, Decrypted text :shvsfsiawghvspsghgaofhqcbhfoqhdzohtcfacihhvsfs
For shift 23, Decrypted text :rgurerhzvfgurorfgfznegpbagenpgcyngsbezbhggurer
For shift 24, Decrypted text :qftqdqgyueftqnqefeymdfoazfdmofbxmfradyagfftqdq
For shift 25, Decrypted text :pespcpfxtdespmpdedxlcenzyeclneawleqzcxzfeespcp
```
