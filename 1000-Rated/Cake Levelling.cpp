#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <long long> v(n, 0);
        vector <long long> ans(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long count = v[0];
        ans[0] = v[0];
        for (int i = 1; i < n; i++) {
            ans[i] = min(ans[i - 1], (count + v[i]) / (i + 1));
            count += v[i];
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}