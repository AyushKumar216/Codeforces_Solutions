#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int temp;
        int pos = 0;
        int neg = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (temp == 1) {
                pos++;
            } else {
                neg++;
            }
        }
        int ans = 0;
        if (pos < neg) {
            ans += (neg - pos) / 2 + (neg - pos) % 2;
            pos += ans;
            neg -= ans;
        }
        if (neg % 2 == 1) {
            ans++;
        }
        cout << ans << endl;
    }
}