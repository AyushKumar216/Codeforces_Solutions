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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (count(v.begin(), v.end(), 0) < 2) {
            cout << "-1" << endl;
        } else if (v[0] == 0 && v.back() == 0) {
            cout << "0" << endl;
        } else if (v[0] == 0 || v.back() == 0) {
            cout << "1" << endl;
        } else {
            cout << "2" << endl;
        }
    }
}