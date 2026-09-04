#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> mp(1, -1);
        for (int i = 0; i < n; i++) {
            if (v[i] > q) {
                mp.push_back(i);
            }
        }
        mp.push_back(n);
        long long ans = 0;
        for (int i = 1; i < (int) mp.size(); i++) {
            if (mp[i] - mp[i - 1] - 1 >= k) {
                ans += 1LL * (1LL * (mp[i] - mp[i - 1] - k) * 1LL * (mp[i] - mp[i - 1] - k + 1)) / 2;
            }
        }
        cout << ans << endl;
    }
}