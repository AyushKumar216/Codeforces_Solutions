#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans;
        cin >> ans;
        int temp;
        for (int i = 1; i < n; i++) {
            cin >> temp;
            ans &= temp;
        }
        cout << ans << endl;
    }
}