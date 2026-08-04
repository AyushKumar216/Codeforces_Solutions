#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool zero = false;
        bool one = false;
        string ans;
        for (int i = 0; i < (int) s.length(); i++) {
            if (s[i] == '0' && zero == false) {
                zero = true;
            } else if (s[i] == '1' && one == false) {
                one = true;
            } else {
                ans.push_back(s[i]);
            }
        }
        cout << ans << endl;
    }
}