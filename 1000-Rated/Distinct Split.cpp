#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        vector<int> mp1(26, 0);
        vector<int> mp2(26, 0);
        for (int i = 0; i < n; i++) {
            mp1[s[i] - 'a']++;
        }
        for (int i = 0; i < n; i++) {
            mp1[s[i] - 'a']--;
            mp2[s[i] - 'a']++;
            ans = max(ans, 52 - count(mp1.begin(), mp1.end(), 0) - count(mp2.begin(), mp2.end(), 0));
        }
        cout << ans << endl;
    }
}