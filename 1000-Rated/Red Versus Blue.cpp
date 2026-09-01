#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;
        string ans = "";
        int base = r / (b + 1);
        int extra = r % (b + 1);
        while (b--) {
            ans += string(base, 'R');
            if (extra) {
                extra--;
                ans += 'R';
            }
            ans += 'B';
        }
        ans += string(n - (int) ans.length(), 'R');
        cout << ans << endl;
    }
}