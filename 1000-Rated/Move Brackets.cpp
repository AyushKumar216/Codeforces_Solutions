#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int left = 0;
        int right = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == ')') {
                right++;
            } else {
                left++;
            }
            ans = max(ans, right - left);
        }
        cout << ans << endl;
    }
}