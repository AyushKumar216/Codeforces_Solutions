#include <iostream>
#include <vector>
#include <numeric>
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
        bool flag = false;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(v[i], v[j]) <= 2) {
                    flag = true;
                    break;
                }
            }
            if (flag == true) {
                break;
            }
        }
        if (flag == true) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}