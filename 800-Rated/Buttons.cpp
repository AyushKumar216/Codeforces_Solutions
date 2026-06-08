#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) % 2 == 1) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
    }
}