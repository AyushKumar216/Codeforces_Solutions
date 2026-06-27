#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            int size;
            cin >> size;
            int temp;
            int min = INT_MAX;
            int smin = INT_MAX;
            for (int j = 0; j < size; j++) {
                cin >> temp;
                if (temp <= min) {
                    smin = min;
                    min = temp;
                } else if (temp < smin) {
                    smin = temp;
                }
            }
            a[i] = min;
            b[i] = smin;
            ans += b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ans += a[0] - b[0];
        cout << ans << endl;
    }
}