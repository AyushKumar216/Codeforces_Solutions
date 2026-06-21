#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s = to_string(n);
        int ans = INT_MAX;
        bool check = false;
        int temp = 0;
        for (int i = (int) s.length() - 1; i >= 0; i--) {
            if (check) {
                if (s[i] != '0' && s[i] != '5') {
                    temp++;
                } else {
                    ans = min(ans, temp);
                    break;
                }
            } else {
                if (s[i] != '0') {
                    temp++;
                } else {
                    check = true;
                }
            }
        }
        check = false;
        temp = 0;
        for (int i = (int) s.length() - 1; i >= 0; i--) {
            if (check) {
                if (s[i] != '2' && s[i] != '7') {
                    temp++;
                } else {
                    ans = min(ans, temp);
                    break;
                }
            } else {
                if (s[i] != '5') {
                    temp++;
                } else {
                    check = true;
                }
            }
        }
        cout << ans << endl;
    }
}