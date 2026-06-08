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
        vector <int> v(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (v[0] == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}