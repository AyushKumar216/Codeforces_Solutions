#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int zero = count(s.begin(), s.end(), '0');
        int one = (int) s.length() - zero;
        if (min(zero, one) % 2 == 0) {
            cout << "NET" << endl;
        } else {
            cout << "DA" << endl;
        }
    }
}