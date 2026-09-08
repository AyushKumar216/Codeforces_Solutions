#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int zero = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 0) {
                zero++;
            }
        }
        if (zero == 1) {
            cout << "NO" << endl;
        } else {
            string ans(n, 'C');
            if (zero == 0) {
                ans[0] = 'A';
                ans[1] = 'B';
            } else {
                bool adone = false;
                for (int i = 0; i < n; i++) {
                    if (v[i] == 0) {
                        if (!adone) {
                            adone = true;
                            ans[i] = 'A';
                        } else {
                            ans[i] = 'B';
                        }
                    }
                }
            }
            cout << "YES" << endl << ans << endl;
        }
    }
}