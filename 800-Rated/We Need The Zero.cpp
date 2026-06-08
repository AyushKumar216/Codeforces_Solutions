#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int temp;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            ans ^= temp;
        }
        if (n % 2 == 1) {
            cout << ans << endl;
        } else if (ans == 0) {
            cout << "1" << endl;
        } else {
            cout << "-1" << endl;
        }
    }
}