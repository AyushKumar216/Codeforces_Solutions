#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n, 0);
        long long ans = b;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            ans += min(1LL * v[i], 1LL * (a - 1));
        }
        cout << ans << endl;
    }
}