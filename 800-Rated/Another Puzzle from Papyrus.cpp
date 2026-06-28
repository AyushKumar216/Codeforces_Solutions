#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = 0;
        bool check = true;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (check && a[i] >= b[i]) {
                ans += a[i] - b[i];
            } else {
                check = false;
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ans2 = c;
        bool poss = true;
        for (int i = 0; i < n; i++) {
            if (a[i] >= b[i]) {
                ans2 += a[i] - b[i];
            } else {
                poss = false;
                break;
            }
        }
        if (check && poss) {
            cout << min(ans, ans2) << endl;
        } else if (check) {
            cout << ans << endl;
        } else if (poss) {
            cout << ans2 << endl;
        } else {
            cout << "-1" << endl;
        }
    }
}