#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int zeros = count(v.begin(), v.end(), 0);
        int ones = count(v.begin(), v.end(), 1);
        cout << 1LL * ones * (1LL << zeros) << endl;
    }
}