#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v(n, 0);
        vector <int> map(100001, 0);
        int variety = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (map[v[i]] == 0) {
                variety++;
            }
            map[v[i]]++;
        }
        if (variety > 2) {
            cout << "No" << endl;
        } else if (variety == 1) {
            cout << "Yes" << endl;
        } else {
            int a = 0, b = 0;
            a = map[v[0]];
            map[v[0]] = 0;
            b = accumulate(map.begin(), map.end(), 0);
            if (abs(a - b) > 1) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }
}