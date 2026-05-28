#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;
        if (gcd(n, a) == 1 && gcd(m, b) == 1 && (a + b) % gcd(n, m) == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}