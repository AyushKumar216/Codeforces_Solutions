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
        int maxi = INT_MIN, minm = INT_MAX;
        vector <int> v(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            maxi = max(maxi, v[i]);
            minm = min(minm, v[i]);
        }
        cout << maxi - minm + 1 << endl;
    }
}