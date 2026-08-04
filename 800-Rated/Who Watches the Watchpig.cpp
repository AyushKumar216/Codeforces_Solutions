#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n < 2 * k) {
            cout << "-1" << endl;
            continue;
        }
        int ans = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'L') {
                ans++;
            }
        }
        for (int i = n - 1; i >= n - k; i--) {
            if (s[i] == 'R') {
                ans++;
            }
        }
        cout << ans << endl;
    }
}