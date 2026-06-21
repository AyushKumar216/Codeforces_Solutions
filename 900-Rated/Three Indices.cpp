#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool done = false;
        for (int i = 1; i < n - 1; i++) {
            if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
                cout << "YES" << endl;
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                done = true;
                break;
            }
        }
        if (!done) {
            cout << "NO" << endl;
        }
    }
}