#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        int ans = 0;
        for (int i = 0; i < n / 2; i++) {
            int j = n - 1 - i;
            if (s[i] != s[j]) {
                if (s[i] == c || s[j] == c) {
                    ans += 1;
                } else {
                    ans += 2;
                }
            }
        }
        cout << ans << endl;
    }
}