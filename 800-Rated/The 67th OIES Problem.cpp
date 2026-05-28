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
        vector <int> a(n + 1, 1);

        for (int i = 1; i <= n; i++) {
            a[i] = i * a[i - 1] / __gcd(i, a[i - 1]);
            cout << a[i] << " ";
        }
        cout << endl;
    }
}