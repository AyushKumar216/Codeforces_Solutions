#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        long long mn = b * k;
        long long mx = b * k + n * (k - 1);
        if (s < mn || s > mx) {
            cout << -1 << endl;
            continue;
        }
        vector<long long> v(n, 0);
        v[0] = b * k;
        long long rem = s - b * k;
        for (int i = 0; i < n && rem > 0; i++) {
            long long add = min(rem, k - 1);
            v[i] += add;
            rem -= add;
        }
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
