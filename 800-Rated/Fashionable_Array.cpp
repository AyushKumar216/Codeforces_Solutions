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
        vector<int> a(n);
        int freq[101] = {};
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        vector<int> ans;
        for (int j = 1; j <= n; j++) {
            for (int i = 100; i >= 1; i--) {
                if (freq[i] >= j) {
                    ans.push_back(i);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}