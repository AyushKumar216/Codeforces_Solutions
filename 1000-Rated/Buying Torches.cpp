#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        long long need = k + y * k - 1;
        cout << (need + x - 2) / (x - 1) + k << endl;
    }
}