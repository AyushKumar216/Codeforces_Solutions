#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool poss = true;
        if (n == 1 || v[0] != v[1] || v[n - 1] != v[n - 2]) {
            poss = false;
        }
        if (poss) {
            for (int i = 1; i < n - 1; i++) {
                if (v[i] != v[i - 1] && v[i] != v[i + 1]) {
                    poss = false;
                    break;
                }
            }
        }
        if (!poss) {
            cout << "-1" << endl;
        } else {
            int first = 1;
            for (int i = 0; i < n; i++) {
                if (i == n - 1 || v[i] != v[i + 1]) {
                    cout << first << " ";
                    first = i + 2;
                } else {
                    cout << i + 2 << " ";
                }
            }
            cout << endl;
        }
    }
}