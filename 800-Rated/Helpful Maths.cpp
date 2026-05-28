#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int one = 0, two = 0, three = 0, plus = 0;
    for (int i = 0; i < (int) s.length(); i++) {
        if (s[i] == '1') {
            one++;
        } else if (s[i] == '2') {
            two++;
        } else if (s[i] == '3') {
            three++;
        } else {
            plus++;
        }
    }
    while (one--) {
        cout << '1';
        if (plus != 0) {
            cout << '+';
            plus--;
        }
    }
    while (two--) {
        cout << '2';
        if (plus != 0) {
            cout << '+';
            plus--;
        }
    }
    while (three--) {
        cout << '3';
        if (plus != 0) {
            cout << '+';
            plus--;
        }
    }
    cout << endl;
}