#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector <long long> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> pref[i];
            pref[i] += pref[i - 1];
        }
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            bool odd = (k * (l - r + 1)) % 2;
            bool odd2 = (pref[n] - pref[r] + pref[l - 1]) % 2;
            if (odd ^ odd2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}