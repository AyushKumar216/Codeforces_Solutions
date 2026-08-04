#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k > n - 2) {
            cout << "-1" << endl;
            continue;
        }
        int c1, c2;
        if ((k + 2) % 2 == 0) {
            c1 = (k + 2) / 2;
            c2 = c1;
        } else {
            c1 = (k + 2) / 2;
            c2 = (k + 3) / 2;
        }
        string s;
        while (c1--) {
            s += '0';
        }
        while (c2--) {
            s += '1';
        }
        if ((int) s.length() > n) {
            cout << "-1" << endl;
            continue;
        } 
        while ((int) s.length() != n) {
            if (s.back() == '0') {
                s += '1';
            } else {
                s += '0';
            }
        }
        cout << s << endl;
    }
}

