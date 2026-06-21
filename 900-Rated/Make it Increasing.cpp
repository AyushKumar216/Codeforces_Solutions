#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        bool zero = false;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 0 && i > 0) {
                zero = true;
            }
        }
        if (zero) {
            cout << "-1" << endl;
        } else {
            reverse(v.begin(), v.end());
            int ans = 0;
            bool done = false;
            for (int i = 1; i < n; i++) {
                while (v[i] >= v[i - 1]) {
                    v[i] /= 2;
                    ans++;
                }
                if (v[i] == 0 && i < n - 1) {
                    done = true;
                    break;
                }
            }
            if (done) {
                cout << "-1" << endl;
            } else {
                cout << ans << endl;
            }
        }
    }
}