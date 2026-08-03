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
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + (s[i - 1] == 'B');
        }
        int ans = INT_MAX;
        for (int i = k; i <= n; i++) {
            ans = min(ans, k - pref[i] + pref[i - k]);
            if (ans == 0) {
                break;
            }
        }
        cout << ans << endl;
    }
}