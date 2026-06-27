#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> pre;
    int cur = 1;
    while (cur <= 1e6) {
        pre.push_back(cur);
        cur <<= 1;
        // cout << cur * 100 << endl;
    }
    int s = pre.size();
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (n <= k) {
            cout << n << endl;
        } else {
            long long ans = 0;
            for (int i = 0; i < s; i++) {
                if (n - 1LL * k * pre[i] >= 0) {
                    ans += k;
                    n -= 1LL * k * pre[i];
                } else {
                    ans += n / pre[i];
                    break;
                }
            }
            cout << ans << endl;
        }
    }
}