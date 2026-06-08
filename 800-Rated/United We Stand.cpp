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
        bool equal = true;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mini = min(mini, v[i]);
            if (i > 0 && v[i] != v[i - 1]) {
                equal = false;
            }
        }
        if (equal == true) {
            cout << "-1" << endl;
        } else {
            vector <int> b, c;
            for (int i = 0; i < n; i++) {
                if (v[i] == mini) {
                    b.push_back(v[i]);
                } else {
                    c.push_back(v[i]);
                }
            }
            cout << (int) b.size() << " " << c.size() << endl;
            for (int i = 0; i < (int) b.size(); i++) {
                cout << b[i] << " ";
            }
            cout <<  endl;
            for (int i = 0; i < (int) c.size(); i++) {
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }
}