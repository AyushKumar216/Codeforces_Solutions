#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector <int> v(n, 0);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i > 0 && v[i] < v[i - 1]) {
                flag = false;
            }
        }
        if (k == 1 && flag == false) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}