#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v;
        vector<char> c;
        int temp = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                v.push_back(temp);
                c.push_back(s[i - 1]);
                temp = 1;
            } else {
                temp++;
            }
        }
        v.push_back(temp);
        c.push_back(s.back());
        int ans = (int)v.size();
        bool doub = false;
        bool sing = false;
        int m = v.size();
        for (int i = 0; i < m; i++) {
            if (v[i] != 1)
                continue;
            if (i == 0 || i == m - 1) {
                continue;
            }
            sing = true;
            if (c[i - 1] == c[i + 1]) {
                ans -= 2;
                doub = true;
                break;
            }
        }
        if (!doub && sing) {
            ans--;
        }
        cout << ans << endl;
    }
}