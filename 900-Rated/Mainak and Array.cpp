#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (n == 1) {
            cout << "0" << endl;
        } else {
            int mini = INT_MAX;
            for (int i = 0; i < n - 1; i++) {
                mini = min(mini, v[i]);
            }
            int ans = v[n - 1] - mini;
            int maxi = INT_MIN;
            for (int i = 1; i < n; i++) {
                maxi = max(maxi, v[i]);
            }
            ans = max(ans, maxi - v[0]);
            ans = max(ans, v[n - 1] - v[0]);
            for (int i = 0; i < n - 1; i++) {
                ans = max(ans, v[i] - v[i + 1]);
            }
            cout << ans << endl;
        }
    }
}