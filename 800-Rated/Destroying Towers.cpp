#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int temp;
        int ans = 0;
        int cur;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (i == 0) {
                cur = temp;
                ans = temp;
            } else if (cur <= temp) {
                ans += cur;
            } else {
                ans += temp;
                cur = temp;
            }
        }
        cout << ans << endl;
    }
}