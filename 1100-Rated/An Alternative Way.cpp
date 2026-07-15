#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n, 0);
        vector<long long> b(n, 0);
        long long asum = 0;
        long long bsum = 0;
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            asum += a[i];
        }
        for (long long i = 0; i < n; i++) {
            cin >> b[i];
            bsum += b[i];
        }
        if (a[0] > b[0] || asum > bsum) {
            cout << "NO" << endl;
        } else {
            long long pref = b[0] - a[0];
            bool ans = true;
            for (int i = 1; i < n; i++) {
                if (a[i] <= b[i]) {
                    pref += b[i] - a[i];
                } else if (a[i] - b[i] > pref) {
                    ans = false;
                    break;
                } else {
                    pref -= a[i] - b[i];
                }
            }
            if (ans) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}