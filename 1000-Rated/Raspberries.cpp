#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int temp;
        int ans = -1;
        int even = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (ans == 0 || temp % k == 0) {
                ans = 0;
            } else {
                ans = max(ans, temp % k);
            }
            if (temp % 2 == 0) {
                even++;
            }
        }
        if (ans == 0) {
            cout << "0" << endl;
        } else if (k == 4) {
            if (even >= 2) {
                cout << "0" << endl;
            } else {
                cout << min(2 - even, k - ans) << endl;
            }
        } else {
            cout << k - ans << endl;
        }
    }
}