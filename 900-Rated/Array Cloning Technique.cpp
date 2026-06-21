#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        long long cur = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int temp = 1;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] == v[i + 1]) {
                temp++;
            } else {
                cur = max(cur, 1LL * temp);
                temp = 1;
            }
        }
        cur = max(cur, 1LL * temp);
        int ans = n - cur;
        while (cur < n) {
            ans++;
            cur += cur;
        }
        cout << ans << '\n';
    }
}