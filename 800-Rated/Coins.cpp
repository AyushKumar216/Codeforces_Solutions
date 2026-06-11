#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if ((k % 2 == 0 && n % 2 == 1) || (n % 2 == 1 && k > n)) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
}