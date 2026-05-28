#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, sum = 0;
        cin >> n >> k;
        vector <int> v(n, k);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        if (n % 2 == 0 || k % 2 == 0 || sum % 2 == 1) {
            cout << "YES" << endl;
        } else {
         cout << "NO" << endl;
        }
    }
}