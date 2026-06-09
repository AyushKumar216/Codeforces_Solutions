#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        int n = min(a, b);
        a -= n;
        b -= n;
        if (a == 0 && b == 0) {
            if (c % 2 == 0) {
                cout << "Second" << endl;
            } else {
                cout << "First" << endl;
            }
        } else if (a == 0) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
    }
}