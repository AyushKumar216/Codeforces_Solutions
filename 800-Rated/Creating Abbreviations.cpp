#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<bool> mp(26, false);
        for (int i = 0; i < n; i++) {
            string temp;
            cin >> temp;
            mp[temp[0] - 'a'] = true;
        }
        string ans = "YES";
        for (int i = 0; i < k; i++) {
            string temp;
            cin >> temp;
            for (int j = 0; j < (int) temp.length(); j++) {
                if (!mp[temp[j] - 'A']) {
                    ans = "NO";
                }
            }
        }
        cout << ans << endl;
    }
}