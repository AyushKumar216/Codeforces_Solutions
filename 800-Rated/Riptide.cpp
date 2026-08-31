#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v(3);
        cin >> v[0];
        cin >> v[1];
        cin >> v[2];
        int ans = 0;
        while (v[0] != v[1] && v[1] != v[2] && v[0] != v[2]) {
            ans++;
            sort(v.begin(), v.end());
            v[0]++;
            v[2]--;
        }
        cout << ans << endl;
    }
}