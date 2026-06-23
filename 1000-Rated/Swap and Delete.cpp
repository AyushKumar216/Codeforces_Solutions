#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int one = 0;
        int zero = 0;
        one = count(s.begin(), s.end(), '1');
        zero = count(s.begin(), s.end(), '0');
        bool done = false;
        for (int i = 0; i < (int) s.length(); i++) {
            if (s[i] == '1' && zero) {
                zero--;
            } else if (s[i] == '0' && one) {
                one--;
            } else {
                cout << one + zero << endl;
                done = true;
                break;
            }
        }
        if (!done) {
            cout << "0" << endl;
        }
    }
}