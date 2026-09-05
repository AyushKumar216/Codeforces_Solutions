#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int cur = n;
    int ans = 0;
    for (int i = 0; i < n && cur > 0; i++) {
        if (v[i] > d) {
            cur--;
            ans++;
        } else if (d / v[i] == 0) {
            if (d / v[i] > cur) {
                break;
            }
            cur -= d / v[i];
            ans++;
        } else {
            if (d / v[i] + 1 > cur) {
                break;
            }
            cur -= d / v[i] + 1;
            ans++;
        }
    }
    cout << ans << endl;
}