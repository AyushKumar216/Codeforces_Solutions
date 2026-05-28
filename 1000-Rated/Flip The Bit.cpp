#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, val, sum = 0, countl = 0, countr = 0;
        cin >> n >> k;
        vector <int> a (n, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        cin >> val;
        if (sum == 0 || sum == n) {
            cout << "0" << endl;
            continue;
        }
        int temp = a[val];
        for (int i = val - 1; i >= 0; i--) {
            if (a[i] != temp) {
                countl++;
                temp = a[i];
            }
        }
        if (temp != a[val]) {
            countl++;
            temp = a[val];
        }
        temp = a[val];
        for (int i = val + 1; i < n; i++) {
            if (a[i] != temp) {
                countr++;
                temp = a[i];
            }
        }
        if (temp != a[val]) {
            countr++;
            temp = a[val];
        }
        cout << max(countl, countr) << endl;
    }
}