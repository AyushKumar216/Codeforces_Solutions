#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> mp(26, 0);
        for (int i = 0; i < n; i++) {
            mp[s[i] - 'a']++;
        }
        bool odd = false;
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (mp[i] % 2 == 1) {
                if (!odd) {
                    odd = true;
                } else {
                    ans++;
                }
            }
        }
        if (k > ans) {
            if (k % 2 == 0) {
                cout << "YES" << endl;
            } else if (odd || ans == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else if (k == ans) {
            cout << "YES" << endl;
        } else {
            if (!odd && (ans - k) == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}