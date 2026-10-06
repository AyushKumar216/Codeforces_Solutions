#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int maxm = v[0];
        int minm = v[0];
        int ans = 0;
        for (int i = 1; i < n; i++) {
            maxm = max(maxm, v[i]);
            minm = min(minm, v[i]);
            if (maxm - minm > 2 * x) {
                ans++;
                maxm = v[i];
                minm = v[i];
            }
        }
        cout << ans << endl;
    }
}