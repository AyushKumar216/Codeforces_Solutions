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
        for (int i = 1; i < n; i++) {
            cin >> temp;
            ans -= temp;
        }
        cout << ans << endl;
    }
}