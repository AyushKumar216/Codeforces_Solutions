#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        while (n > 10) {
            ans += 9;
            n /= 10;
        }
        ans += n;
        cout << ans << endl;
    }
}