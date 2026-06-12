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
        int two = count(v.begin(), v.end(), 2);
        if (two == 0) {
            cout << "1" << endl;
        } else if (two % 2 == 1) {
            cout << "-1" << endl;
        } else {
            two /= 2;
            for (int i = 0; i < n; i++) {
                if (v[i] == 2) {
                    two--;
                }
                if (two == 0) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
}