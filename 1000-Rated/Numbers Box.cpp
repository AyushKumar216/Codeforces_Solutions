#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v(n * m);
        int neg = 0;
        for (int i = 0; i < n * m; i++) {
            cin >> v[i];
            if (v[i] < 0) {
                v[i] *= -1;
                neg++;
            }
        }
        neg %= 2;
        cout << accumulate(v.begin(), v.end(), 0) - 2 * neg * (* min_element(v.begin(), v.end())) << endl;
    }
}