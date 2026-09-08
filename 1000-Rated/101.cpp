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
        int fleft = -1;
        int fright = -1;
        for (int i = 0; i < n; i++) {
            if (v[i] == 1 || v[i] == -1) {
                fright = i;
                if (fleft == -1) {
                    fleft = i;
                }
            }
        }
        if (fleft != -1) {
            v[fleft] = 1;
        }
        if (fright != -1) {
            v[fright] = 1;
        }
        for (int i = 0; i < n; i++) {
            if (v[i] == -1) {
                v[i] = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}