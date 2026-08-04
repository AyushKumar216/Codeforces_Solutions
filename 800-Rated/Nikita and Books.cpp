#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n, 0);
        bool ans = true;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long cur = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] >= i + 1) {
                cur += v[i] - i - 1;
            } else {
                if (i + 1 - v[i] <= cur) {
                    cur -= (i + 1 - v[i]);
                    // cout << cur << endl;
                } else {
                    ans = false;
                    break;
                }
            }
            // cout << cur << endl;
        }
        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}