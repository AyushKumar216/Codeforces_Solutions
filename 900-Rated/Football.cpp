#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cons = 1;
    for (int i = 1; i < (int) s.length(); i++) {
        if (s[i] == s[i - 1]) {
            cons++;
        } else {
            cons = 1;
        }
        if (cons == 7) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}