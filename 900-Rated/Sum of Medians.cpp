#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n * k, 0);
        for (int i = 0; i < n * k; i++) {
            cin >> v[i];
        }
        int med = (n / 2) + (n % 2 != 0);
        med = n - med + 1;
        int idx = n * k - med;
        long long ans = 0;
        for (int i = 0; i < k; i++) {
            ans += v[idx];
            idx -= med;
        }
        cout << ans << endl;
    }
}