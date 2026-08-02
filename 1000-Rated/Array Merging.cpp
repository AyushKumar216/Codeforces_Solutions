#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<int> mp(2 * n + 1, 0);
        vector<int> mp2(2 * n + 1, 0);
        int temp = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                temp++;
            } else {
                mp[a[i - 1]] = max(mp[a[i - 1]], temp);
                temp = 1;
            }
        }
        mp[a[n - 1]] = max(mp[a[n - 1]], temp);
        temp = 1;
        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) {
                temp++;
            } else {
                mp2[b[i - 1]] = max(mp2[b[i - 1]], temp);
                temp = 1;
            }
        }
        mp2[b[n - 1]] = max(mp2[b[n - 1]], temp);
        int ans = 0;
        for (int i = 0; i <= 2 * n; i++) {
            ans = max(ans, mp[i] + mp2[i]);
        }
        cout << ans << endl;
    }
}