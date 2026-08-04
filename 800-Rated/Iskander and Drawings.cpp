#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cur = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                cur++;
            } else {
                ans = max(ans, cur);
                cur = 0;
            }
            ans = max(ans, cur);
        }
        cout << ans / 2 + (ans % 2 == 1) << endl;
    }
}