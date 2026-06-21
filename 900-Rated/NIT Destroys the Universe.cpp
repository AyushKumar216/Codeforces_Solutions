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
        int cur = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (temp != 0) {
                cur++;
            } else {
                if (cur > 0) {
                    ans++;
                    cur = 0;
                }
            }
        }
        if (cur > 0) {
            ans++;
        }
        cout << min(2, ans) << endl;
    }
}