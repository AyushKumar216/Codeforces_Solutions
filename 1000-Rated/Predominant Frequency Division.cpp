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
        vector<int> pref1(n, -1);
        vector<int> pref2(n, -1);
        vector<int> suff1(n, -1);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 1) {
                pref1[i] = 1;
                pref2[i] = 1;
            } else if (v[i] == 2) {
                pref1[i] = -1;
                pref2[i] = 1;
            } else {
                pref1[i] = -1;
                pref2[i] = -1;
            }
            if (i > 0) {
                pref1[i] += pref1[i - 1];
                pref2[i] += pref2[i - 1];
            }
        }
        suff1[n - 2] = pref2[n - 2];
        for (int i = n - 3; i >= 0; i--) {
            suff1[i] = max(suff1[i + 1], pref2[i]);
        }
        bool ans = false;
        for (int i = 0; i < n - 2; i++) {
            if (pref1[i] >= 0 && suff1[i + 1] >= pref2[i]) {
                ans = true;
                break;
            }
        }
        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}