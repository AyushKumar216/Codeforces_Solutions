#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int d = 1;
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                d = i;
                break;
            }
        }
        cout << n / d << " " << n - n / d << endl;
    }
}