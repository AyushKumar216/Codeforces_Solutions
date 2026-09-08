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
        int odd = 0;
        int four = 0;
        int nfour = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 1) {
                odd++;
            } else if (v[i] % 4 == 0) {
                four++;
            } else {
                nfour++;
            }
        }
        cout << max(odd, max(four, nfour)) << endl;
    }
}