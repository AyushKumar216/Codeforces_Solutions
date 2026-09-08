#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v(n / k, 1);
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                v[i / k] = 0;
            }
        }
        cout << accumulate(v.begin(), v.end(), 0) << endl;
    }
}