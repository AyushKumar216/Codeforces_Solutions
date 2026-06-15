#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long diff = abs(b - a);
        if (diff == 0) {
            cout << "0 0" << endl;
        } else if (diff == 1) {
            cout << "1 0" << endl;
        } else {
            long long maxm = max(a, b);
            long long ans = maxm % diff;
            ans = min(ans, diff - ans);
            cout << diff << " " << ans << endl;
        }
    }
}