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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> non;
        vector<int> cnt;
        non.push_back(v[0]);
        cnt.push_back(1);
        for (int i = 1; i < n; i++) {
            if (v[i] != v[i - 1]) {
                non.push_back(v[i]);
                cnt.push_back(1);
            } else {
                cnt.back()++;
            }
        }
        int m = non.size();
        int ans = m;
        bool bfound = false;
        for (int i = 0; i + 1 < m; i++) {
            if (cnt[i] >= 2 && cnt[i + 1] >= 2) {
                bfound = true;
                break;
            }
        }
        if (bfound) {
            ans = m + 2;
        } else {
            bool afound = false;
            for (int i = 0; i < m; i++) {
                if (cnt[i] < 2) {
                    continue;
                }
                if (((i < m - 1) && (i + 2 >= m || non[i + 2] != non[i])) || ((i > 0) && (i - 2 < 0 || non[i - 2] != non[i]))) {
                    afound = true;
                    break;
                }
            }
            if (afound) {
                ans = m + 1;
            }
        }
        cout << min(ans, n) << endl;
    }
}