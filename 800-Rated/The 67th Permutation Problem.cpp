#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(3 * n, 0);
        int initial = 1, final = 3 * n;
        for (int i = 0; i < 3 * n; i++) {
            if (i % 3 == 0) {
                a[i] = initial;
                initial++;
            } else {
                a[i] = final;
                final--;
            }
            cout << a[i] << " ";
        }
        cout << endl;
    }
}