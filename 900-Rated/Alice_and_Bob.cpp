#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, a;
        cin >> n >> a;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        // sort(v.begin(), v.end());
        long long left = 0;
        long long right = 0;
        for (long long i = 0; i < n; i++) {
            if (v[i] < a) {
                left++;
            } else if (v[i] > a) {
                right++;
            }
        }
        // long long total = accumulate(v.begin(), v.end(), 0);
        if (left > right) {
            cout << a - 1 << endl;
        } else {
            cout << a + 1 << endl;
        }
    }
}