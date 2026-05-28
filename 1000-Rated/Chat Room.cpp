#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int h = 0, e = 0, l = 0, o = 0;
    for (int i = 0; i < (int) s.length(); i++) {
        if (h < 1) {
            if (s[i] == 'h') {
                h++;
            } 
        } else if (e < 1) {
            if (s[i] == 'e') {
                e++;
            }
        } else if (l < 2) {
            if (s[i] == 'l') {
                l++;
            }
        } else if (o < 1) {
            if (s[i] == 'o') {
                o++;
            }            
        }
    }
    if (h == 1 && e == 1 && l == 2 && o == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}