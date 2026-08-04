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
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i % 2 == 0) {
                mini = min(mini, v[i]);
            } else {
                maxi = max(maxi, v[i]);
            }
        }
        if (n % 2 == 1) {
            cout << "NO" << endl;
            continue;
        }
        if (mini - maxi > 1) {
            cout << "YES" << endl;
            // cout << mini << " " << maxi << endl;
        } else {
            cout << "NO" << endl;
            // cout << mini << " " << maxi << endl;
        }
    }
}