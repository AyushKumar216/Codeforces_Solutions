#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v(4 * n, 0);
        for (int i = 1; i <= n; i++) {
            v[i - 1] = i;
            v[n + i - 1] = i;
            v[2 * n + (i % n)] = i;
            v[3 * n + (i + 2) % n] = i;
        }
        if (n == 2) {
            cout << "1 2 1 2 2 1 1 2" << endl;
        } else {
            for (int i = 0; i < 4 * n; i++) {
                cout << v[i] << " ";
            }   
            cout << endl;
        }
    }
}