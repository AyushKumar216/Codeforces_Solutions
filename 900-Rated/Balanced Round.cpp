#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = 1;
        int temp = 1;
        for (int i = 0; i < n - 1; i++) {
            if (abs(v[i] - v[i + 1]) <= k) {
                temp++;
            } else {
                ans = max(ans, temp);
                temp = 1;
            }
        }
        ans = max(ans, temp);
        cout << n - ans << endl;
    }
}